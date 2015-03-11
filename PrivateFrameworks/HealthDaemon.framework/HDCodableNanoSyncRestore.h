/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSMutableArray, NSString;

@interface HDCodableNanoSyncRestore : PBCodable <NSCopying, HDSyncObjectCollection, HDNanoSyncDescription> {
    struct { 
        unsigned int objectType : 1; 
    } _has;
    NSMutableArray *_objectDatas;
    int _objectType;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool hasObjectType;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableArray * objectDatas;
@property int objectType;
@property(readonly) Class superclass;

+ (id)restoreWithNanoSyncEntityClass:(Class)arg1;

- (void).cxx_destruct;
- (void)addObjectData:(id)arg1;
- (void)clearObjectDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedObjects;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasObjectType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nanoSyncDescription;
- (id)objectDataAtIndex:(unsigned long long)arg1;
- (id)objectDatas;
- (unsigned long long)objectDatasCount;
- (int)objectType;
- (bool)readFrom:(id)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setObjectDatas:(id)arg1;
- (void)setObjectType:(int)arg1;
- (void)setObjects:(id)arg1;
- (Class)syncEntityClass;
- (void)writeTo:(id)arg1;

@end