/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSMemoryCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cacheEntries;
    int  _evictNoticeToken;
    unsigned int  _maxEntries;
    unsigned int  _memoryCacheDeleteCount;
    unsigned int  _memoryCacheEvictCount;
    unsigned int  _memoryCacheHighwaterCount;
    unsigned int  _memoryCacheHitCount;
    unsigned int  _memoryCacheRequestCount;
    unsigned int  _memoryCacheUpdateCount;
    NSObject<OS_dispatch_source> * _memoryNotificationSource;
    unsigned long  _memoryStatus;
    BOOL  _memoryStatusChanged;
    double  _minAge;
    double  _oldestCacheEntry;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSMutableDictionary *cacheEntries;
@property int evictNoticeToken;
@property (nonatomic) unsigned int maxEntries;
@property unsigned int memoryCacheDeleteCount;
@property unsigned int memoryCacheEvictCount;
@property unsigned int memoryCacheHighwaterCount;
@property unsigned int memoryCacheHitCount;
@property unsigned int memoryCacheRequestCount;
@property unsigned int memoryCacheUpdateCount;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryNotificationSource;
@property unsigned long memoryStatus;
@property BOOL memoryStatusChanged;
@property (nonatomic) double minAge;
@property double oldestCacheEntry;

+ (id)globalEvictQueue;
+ (void)registerEvictionActivity;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (unsigned int)_cacheCount;
- (void)_lockedEvictEntriesFromCache;
- (id)accessQueue;
- (id)cacheEntries;
- (void)clearCache;
- (void)dealloc;
- (int)evictNoticeToken;
- (void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(int)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)hasStatusToReport;
- (id)init;
- (unsigned int)maxEntries;
- (unsigned int)memoryCacheDeleteCount;
- (unsigned int)memoryCacheEvictCount;
- (unsigned int)memoryCacheHighwaterCount;
- (unsigned int)memoryCacheHitCount;
- (unsigned int)memoryCacheRequestCount;
- (unsigned int)memoryCacheUpdateCount;
- (id)memoryNotificationSource;
- (unsigned long)memoryStatus;
- (BOOL)memoryStatusChanged;
- (double)minAge;
- (double)oldestCacheEntry;
- (void)runCacheEviction;
- (void)setAccessQueue:(id)arg1;
- (void)setCacheEntries:(id)arg1;
- (void)setEvictNoticeToken:(int)arg1;
- (void)setMaxEntries:(unsigned int)arg1;
- (void)setMemoryCacheDeleteCount:(unsigned int)arg1;
- (void)setMemoryCacheEvictCount:(unsigned int)arg1;
- (void)setMemoryCacheHighwaterCount:(unsigned int)arg1;
- (void)setMemoryCacheHitCount:(unsigned int)arg1;
- (void)setMemoryCacheRequestCount:(unsigned int)arg1;
- (void)setMemoryCacheUpdateCount:(unsigned int)arg1;
- (void)setMemoryNotificationSource:(id)arg1;
- (void)setMemoryStatus:(unsigned long)arg1;
- (void)setMemoryStatusChanged:(BOOL)arg1;
- (void)setMinAge:(double)arg1;
- (void)setOldestCacheEntry:(double)arg1;
- (void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(int)arg3 withCompletionHandler:(id /* block */)arg4;

@end
