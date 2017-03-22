/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDMailMessage;

@interface AWDMailMessageDisplayErrorReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _loadingError;
	AWDMailMessage* _message;
	int _mimeError;
	SCD_Struct_AW28 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMimeError; 
@property (assign,nonatomic) int mimeError;                             //@synthesize mimeError=_mimeError - In the implementation block
@property (assign,nonatomic) BOOL hasLoadingError; 
@property (assign,nonatomic) int loadingError;                          //@synthesize loadingError=_loadingError - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) AWDMailMessage * message;                  //@synthesize message=_message - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMessage:(AWDMailMessage *)arg1 ;
-(id)dictionaryRepresentation;
-(AWDMailMessage *)message;
-(BOOL)hasMessage;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)mimeError;
-(void)setMimeError:(int)arg1 ;
-(void)setHasMimeError:(BOOL)arg1 ;
-(BOOL)hasMimeError;
-(id)mimeErrorAsString:(int)arg1 ;
-(int)StringAsMimeError:(id)arg1 ;
-(int)loadingError;
-(void)setLoadingError:(int)arg1 ;
-(void)setHasLoadingError:(BOOL)arg1 ;
-(BOOL)hasLoadingError;
-(id)loadingErrorAsString:(int)arg1 ;
-(int)StringAsLoadingError:(id)arg1 ;
@end

