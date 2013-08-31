void CLink::processDetectors(void) {
    int det, new_state, old_state  = 0;
    POSITION pos, pos_i = NULL;
    CDetector *detector = NULL;
    CInteger *pi = NULL;
    CBinarySequence *sequence = NULL;
    pos = m_detector_list.GetHeadPosition();
    while (pos != NULL) {<ls>\label{lst:iterate-sensors}<le>
        detector = m_detector_list.GetNext(pos);
        int det_num = detector->getCorsimId();<ls>\label{lst:get-sensor-id}<le>
        det = net_det_on[det_num];<ls>\label{lst:get-sensor-on}<le>
        sequence = CBinarySequence::convert(det);<ls>\label{lst:get-sensor-bits}<le>
        pos_i = sequence->sequence.GetTailPosition();<ls>\label{lst:get-sensor-state-start}<le>
        old_state = detector->getState() ? 1 : 0;
        for (index = 0; index < 10; index++) {
            pi = sequence->sequence.GetPrev(pos_i);
            new_state = pi->data;
            if ((old_state == 0) && (new_state == 1)) {
                detector->setState(true, !is_init);
            }
            if ((old_state == 1) && (new_state == 1)) {
                float atime = detector->getActivationTime();
                detector->setState(true, !is_init);
            }
            if ((old_state == 1) && (new_state == 0)) {
                detector->setState(false, !is_init);
            }
            if ((old_state == 0) && (new_state == 0)) {
                detector->setState(false, !is_init);
            }
            old_state = new_state;
        }<ls>\label{lst:get-sensor-state-end}<le>
        delete sequence;
    }
}
