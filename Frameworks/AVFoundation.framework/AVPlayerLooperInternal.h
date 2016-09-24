/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerLooperInternal : NSObject {
    NSError * error;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  forwardPlaybackStartTime;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    AVPlayerItem * lastEnqueuedLoopingItem;
    BOOL  listeningForItemFailedToPlayToEndTime;
    int  loopCount;
    struct { 
        struct { 
            int value; 
            int timescale; 
            unsigned int flags; 
            int epoch; 
        } start; 
        struct { 
            int value; 
            int timescale; 
            unsigned int flags; 
            int epoch; 
        } duration; 
    }  loopRange;
    AVPlayerItem * loopingItem;
    NSMutableArray * loopingItemCopies;
    NSMutableArray * loopingItemStatusKVOInvokers;
    AVQueuePlayer * loopingPlayer;
    <AVCallbackCancellation> * playerCurrentItemKVOInvoker;
    int  playerOriginalActionAtItemEnd;
    int  status;
    BOOL  waitingForLastLoopingCopyToFinish;
    AVWeakReference * weakReference;
}

@end