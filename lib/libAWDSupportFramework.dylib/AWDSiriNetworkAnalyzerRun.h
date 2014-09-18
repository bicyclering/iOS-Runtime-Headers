/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSiriNetworkAnalyzerRun : PBCodable <NSCopying> {
    struct { 
        unsigned int gatewayPingDuration : 1; 
        unsigned int knownURLLoadDuration : 1; 
        unsigned int siriSaltURLLoadDuration : 1; 
        unsigned int siriURLLoadDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int gatewayPingsDropped : 1; 
        unsigned int gatewayPingsSent : 1; 
        unsigned int gatewayStatus : 1; 
        unsigned int interface : 1; 
        unsigned int sendBufferBytesRemaining : 1; 
        unsigned int analyzingSuccessfulRetry : 1; 
        unsigned int isUserRequest : 1; 
        unsigned int wwanPreferred : 1; 
    unsigned long long _gatewayPingDuration;
    unsigned int _gatewayPingsDropped;
    unsigned int _gatewayPingsSent;
    int _gatewayStatus;
    } _has;
    int _interface;
    unsigned long long _knownURLLoadDuration;
    int _sendBufferBytesRemaining;
    unsigned long long _siriSaltURLLoadDuration;
    unsigned long long _siriURLLoadDuration;
    unsigned long long _timestamp;
    bool_analyzingSuccessfulRetry;
    bool_isUserRequest;
    bool_wwanPreferred;
}

@property bool analyzingSuccessfulRetry;
@property unsigned long long gatewayPingDuration;
@property unsigned int gatewayPingsDropped;
@property unsigned int gatewayPingsSent;
@property int gatewayStatus;
@property bool hasAnalyzingSuccessfulRetry;
@property bool hasGatewayPingDuration;
@property bool hasGatewayPingsDropped;
@property bool hasGatewayPingsSent;
@property bool hasGatewayStatus;
@property bool hasInterface;
@property bool hasIsUserRequest;
@property bool hasKnownURLLoadDuration;
@property bool hasSendBufferBytesRemaining;
@property bool hasSiriSaltURLLoadDuration;
@property bool hasSiriURLLoadDuration;
@property bool hasTimestamp;
@property bool hasWwanPreferred;
@property int interface;
@property bool isUserRequest;
@property unsigned long long knownURLLoadDuration;
@property int sendBufferBytesRemaining;
@property unsigned long long siriSaltURLLoadDuration;
@property unsigned long long siriURLLoadDuration;
@property unsigned long long timestamp;
@property bool wwanPreferred;

- (bool)analyzingSuccessfulRetry;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)gatewayPingDuration;
- (unsigned int)gatewayPingsDropped;
- (unsigned int)gatewayPingsSent;
- (int)gatewayStatus;
- (bool)hasAnalyzingSuccessfulRetry;
- (bool)hasGatewayPingDuration;
- (bool)hasGatewayPingsDropped;
- (bool)hasGatewayPingsSent;
- (bool)hasGatewayStatus;
- (bool)hasInterface;
- (bool)hasIsUserRequest;
- (bool)hasKnownURLLoadDuration;
- (bool)hasSendBufferBytesRemaining;
- (bool)hasSiriSaltURLLoadDuration;
- (bool)hasSiriURLLoadDuration;
- (bool)hasTimestamp;
- (bool)hasWwanPreferred;
- (unsigned long long)hash;
- (int)interface;
- (bool)isEqual:(id)arg1;
- (bool)isUserRequest;
- (unsigned long long)knownURLLoadDuration;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sendBufferBytesRemaining;
- (void)setAnalyzingSuccessfulRetry:(bool)arg1;
- (void)setGatewayPingDuration:(unsigned long long)arg1;
- (void)setGatewayPingsDropped:(unsigned int)arg1;
- (void)setGatewayPingsSent:(unsigned int)arg1;
- (void)setGatewayStatus:(int)arg1;
- (void)setHasAnalyzingSuccessfulRetry:(bool)arg1;
- (void)setHasGatewayPingDuration:(bool)arg1;
- (void)setHasGatewayPingsDropped:(bool)arg1;
- (void)setHasGatewayPingsSent:(bool)arg1;
- (void)setHasGatewayStatus:(bool)arg1;
- (void)setHasInterface:(bool)arg1;
- (void)setHasIsUserRequest:(bool)arg1;
- (void)setHasKnownURLLoadDuration:(bool)arg1;
- (void)setHasSendBufferBytesRemaining:(bool)arg1;
- (void)setHasSiriSaltURLLoadDuration:(bool)arg1;
- (void)setHasSiriURLLoadDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWwanPreferred:(bool)arg1;
- (void)setInterface:(int)arg1;
- (void)setIsUserRequest:(bool)arg1;
- (void)setKnownURLLoadDuration:(unsigned long long)arg1;
- (void)setSendBufferBytesRemaining:(int)arg1;
- (void)setSiriSaltURLLoadDuration:(unsigned long long)arg1;
- (void)setSiriURLLoadDuration:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWwanPreferred:(bool)arg1;
- (unsigned long long)siriSaltURLLoadDuration;
- (unsigned long long)siriURLLoadDuration;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;
- (bool)wwanPreferred;

@end