/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDMMCSGetRequestInfo : PBCodable <NSCopying> {

	long long _duration;
	long long _localBytes;
	long long _resumedBytes;
	long long _startTime;
	long long _timestamp;
	NSMutableArray* _authHttpInfos;
	NSMutableArray* _cancelErrors;
	int _cancelledErrorCode;
	NSString* _cancelledErrorDomain;
	NSString* _ckContainerId;
	NSString* _clientId;
	NSMutableArray* _completeHttpInfos;
	NSMutableArray* _containerHttpInfos;
	NSMutableArray* _errors;
	int _itemCount;
	unsigned _itemCountFailed;
	unsigned _itemCountSuccessful;
	int _itemsNeedingChunks;
	int _requestErrorCode;
	NSString* _requestErrorDomain;
	BOOL _allItemsFailed;
	BOOL _allItemsSuccessful;
	SCD_Struct_AW19 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasClientId; 
@property (nonatomic,retain) NSString * clientId;                              //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasCancelledErrorDomain; 
@property (nonatomic,retain) NSString * cancelledErrorDomain;                  //@synthesize cancelledErrorDomain=_cancelledErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasCancelledErrorCode; 
@property (assign,nonatomic) int cancelledErrorCode;                           //@synthesize cancelledErrorCode=_cancelledErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain;                    //@synthesize requestErrorDomain=_requestErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasRequestErrorCode; 
@property (assign,nonatomic) int requestErrorCode;                             //@synthesize requestErrorCode=_requestErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasItemCount; 
@property (assign,nonatomic) int itemCount;                                    //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) BOOL hasItemsNeedingChunks; 
@property (assign,nonatomic) int itemsNeedingChunks;                           //@synthesize itemsNeedingChunks=_itemsNeedingChunks - In the implementation block
@property (assign,nonatomic) BOOL hasLocalBytes; 
@property (assign,nonatomic) long long localBytes;                             //@synthesize localBytes=_localBytes - In the implementation block
@property (assign,nonatomic) BOOL hasResumedBytes; 
@property (assign,nonatomic) long long resumedBytes;                           //@synthesize resumedBytes=_resumedBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * authHttpInfos;                   //@synthesize authHttpInfos=_authHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerHttpInfos;              //@synthesize containerHttpInfos=_containerHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * completeHttpInfos;               //@synthesize completeHttpInfos=_completeHttpInfos - In the implementation block
@property (nonatomic,retain) NSMutableArray * cancelErrors;                    //@synthesize cancelErrors=_cancelErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * errors;                          //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL hasAllItemsSuccessful; 
@property (assign,nonatomic) BOOL allItemsSuccessful;                          //@synthesize allItemsSuccessful=_allItemsSuccessful - In the implementation block
@property (assign,nonatomic) BOOL hasItemCountSuccessful; 
@property (assign,nonatomic) unsigned itemCountSuccessful;                     //@synthesize itemCountSuccessful=_itemCountSuccessful - In the implementation block
@property (assign,nonatomic) BOOL hasAllItemsFailed; 
@property (assign,nonatomic) BOOL allItemsFailed;                              //@synthesize allItemsFailed=_allItemsFailed - In the implementation block
@property (assign,nonatomic) BOOL hasItemCountFailed; 
@property (assign,nonatomic) unsigned itemCountFailed;                         //@synthesize itemCountFailed=_itemCountFailed - In the implementation block
@property (nonatomic,readonly) BOOL hasCkContainerId; 
@property (nonatomic,retain) NSString * ckContainerId;                         //@synthesize ckContainerId=_ckContainerId - In the implementation block
+(Class)authHttpInfosType;
+(Class)containerHttpInfosType;
+(Class)completeHttpInfosType;
+(Class)cancelErrorType;
+(Class)errorType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)timestamp;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)setTimestamp:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startTime;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(BOOL)hasRequestErrorDomain;
-(void)setRequestErrorCode:(int)arg1 ;
-(void)setHasRequestErrorCode:(BOOL)arg1 ;
-(BOOL)hasRequestErrorCode;
-(NSString *)requestErrorDomain;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(int)requestErrorCode;
-(void)setHasDuration:(BOOL)arg1 ;
-(int)itemCount;
-(void)setClientId:(NSString *)arg1 ;
-(BOOL)hasClientId;
-(NSString *)clientId;
-(void)setCancelledErrorDomain:(NSString *)arg1 ;
-(void)setAuthHttpInfos:(NSMutableArray *)arg1 ;
-(void)setContainerHttpInfos:(NSMutableArray *)arg1 ;
-(void)setCompleteHttpInfos:(NSMutableArray *)arg1 ;
-(void)setCancelErrors:(NSMutableArray *)arg1 ;
-(void)setCkContainerId:(NSString *)arg1 ;
-(void)addAuthHttpInfos:(id)arg1 ;
-(void)addContainerHttpInfos:(id)arg1 ;
-(void)addCompleteHttpInfos:(id)arg1 ;
-(void)addCancelError:(id)arg1 ;
-(void)addError:(id)arg1 ;
-(unsigned long long)authHttpInfosCount;
-(void)clearAuthHttpInfos;
-(id)authHttpInfosAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)containerHttpInfosCount;
-(void)clearContainerHttpInfos;
-(id)containerHttpInfosAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)completeHttpInfosCount;
-(void)clearCompleteHttpInfos;
-(id)completeHttpInfosAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cancelErrorsCount;
-(void)clearCancelErrors;
-(id)cancelErrorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)errorsCount;
-(void)clearErrors;
-(id)errorAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCancelledErrorDomain;
-(void)setCancelledErrorCode:(int)arg1 ;
-(void)setHasCancelledErrorCode:(BOOL)arg1 ;
-(BOOL)hasCancelledErrorCode;
-(void)setHasItemCount:(BOOL)arg1 ;
-(BOOL)hasItemCount;
-(void)setItemsNeedingChunks:(int)arg1 ;
-(void)setHasItemsNeedingChunks:(BOOL)arg1 ;
-(BOOL)hasItemsNeedingChunks;
-(void)setLocalBytes:(long long)arg1 ;
-(void)setHasLocalBytes:(BOOL)arg1 ;
-(BOOL)hasLocalBytes;
-(void)setResumedBytes:(long long)arg1 ;
-(void)setHasResumedBytes:(BOOL)arg1 ;
-(BOOL)hasResumedBytes;
-(void)setAllItemsSuccessful:(BOOL)arg1 ;
-(void)setHasAllItemsSuccessful:(BOOL)arg1 ;
-(BOOL)hasAllItemsSuccessful;
-(void)setItemCountSuccessful:(unsigned)arg1 ;
-(void)setHasItemCountSuccessful:(BOOL)arg1 ;
-(BOOL)hasItemCountSuccessful;
-(void)setAllItemsFailed:(BOOL)arg1 ;
-(void)setHasAllItemsFailed:(BOOL)arg1 ;
-(BOOL)hasAllItemsFailed;
-(void)setItemCountFailed:(unsigned)arg1 ;
-(void)setHasItemCountFailed:(BOOL)arg1 ;
-(BOOL)hasItemCountFailed;
-(BOOL)hasCkContainerId;
-(NSString *)cancelledErrorDomain;
-(int)cancelledErrorCode;
-(int)itemsNeedingChunks;
-(long long)localBytes;
-(long long)resumedBytes;
-(NSMutableArray *)authHttpInfos;
-(NSMutableArray *)containerHttpInfos;
-(NSMutableArray *)completeHttpInfos;
-(NSMutableArray *)cancelErrors;
-(BOOL)allItemsSuccessful;
-(unsigned)itemCountSuccessful;
-(BOOL)allItemsFailed;
-(unsigned)itemCountFailed;
-(NSString *)ckContainerId;
-(NSMutableArray *)errors;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)setItemCount:(int)arg1 ;
@end

