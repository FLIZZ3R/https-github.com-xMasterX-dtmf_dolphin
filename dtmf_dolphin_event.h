#pragma once

typedef enum {
    DTMFDolphinEventVolumeUp = 0,
    DTMFDolphinEventVolumeDown,
    DTMFDolphinDialerOkCB,
    DTMFDolphinEventStartDialer,
    DTMFDolphinEventStartBluebox,
    DTMFDolphinEventStartRedboxUS,
    DTMFDolphinEventStartRedboxUK,
    DTMFDolphinEventStartMisc,
    DTMFDolphinEventPlayTones,
    DTMFDolphinEventStopTones,
    DTMFDolphinEventDMAHalfTransfer,
    DTMFDolphinEventDMAFullTransfer,
} DTMFDolphinEvent;

typedef struct {
    DTMFDolphinEvent type;
} DTMFDolphinCustomEvent;