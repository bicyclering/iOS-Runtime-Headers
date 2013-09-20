/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiCloudSyncEngine.framework/WiFiCloudSyncEngine
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSThread, NSUbiquitousKeyValueStore;

@interface WiFiCloudSyncEngineCore : NSObject {
    int (*callback)();
    NSThread *clientThread;
    void *context;
    BOOL iCloudSyncingEnabled;
    NSUbiquitousKeyValueStore *keyValueStore;
}

@property int (* callback;
@property(retain) NSThread * clientThread;
@property void* context;
@property BOOL iCloudSyncingEnabled;
@property(retain) NSUbiquitousKeyValueStore * keyValueStore;

- (int (*)())callback;
- (void)addToKVStore:(id)arg1;
- (void)asyncCircleStatusCheck;
- (id)clientThread;
- (void*)context;
- (void)dealloc;
- (void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2;
- (id)getStoreValueForKey:(id)arg1;
- (BOOL)iCloudSyncingEnabled;
- (void)initWithCallback:(int (*)())arg1 callbackContext:(void*)arg2;
- (id)keyValueStore;
- (void)printCompleteKVStore;
- (id)readCompleteKVStore;
- (void)relayCircleStatusCheck:(id)arg1;
- (void)relayCloudEvent:(id)arg1;
- (void)removeFromKVStore:(id)arg1;
- (void)setCallback:(int (*)())arg1;
- (void)setClientThread:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setICloudSyncingEnabled:(BOOL)arg1;
- (void)setKeyValueStore:(id)arg1;
- (void)subscribeKVStoreNotficationsForBundleId:(id)arg1;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (void)unSubscribeKVStoreNotfications;

@end