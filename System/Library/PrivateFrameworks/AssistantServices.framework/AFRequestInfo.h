/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSData, NSDictionary;

@interface AFRequestInfo : NSObject <NSSecureCoding> {

	NSNumber* _notifyState;
	NSString* _text;
	NSString* _directAction;
	NSData* _handoffRequestData;
	NSString* _handoffURLString;
	NSString* _correctedSpeech;
	NSDictionary* _correctedSpeechContext;
	NSNumber* _combinedRank;
	NSNumber* _combinedScore;
	NSString* _interactionId;
	NSNumber* _onDeviceUtterancesPresent;
	NSNumber* _originalRank;
	NSNumber* _originalScore;
	NSString* _previousUtterance;
	NSString* _sessionId;
	NSString* _utteranceSource;

}

@property (nonatomic,copy) NSNumber * notifyState;                             //@synthesize notifyState=_notifyState - In the implementation block
@property (nonatomic,copy) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * directAction;                            //@synthesize directAction=_directAction - In the implementation block
@property (nonatomic,copy) NSData * handoffRequestData;                        //@synthesize handoffRequestData=_handoffRequestData - In the implementation block
@property (nonatomic,copy) NSString * handoffURLString;                        //@synthesize handoffURLString=_handoffURLString - In the implementation block
@property (nonatomic,copy) NSString * correctedSpeech;                         //@synthesize correctedSpeech=_correctedSpeech - In the implementation block
@property (nonatomic,copy) NSDictionary * correctedSpeechContext;              //@synthesize correctedSpeechContext=_correctedSpeechContext - In the implementation block
@property (nonatomic,copy) NSNumber * combinedRank;                            //@synthesize combinedRank=_combinedRank - In the implementation block
@property (nonatomic,copy) NSNumber * combinedScore;                           //@synthesize combinedScore=_combinedScore - In the implementation block
@property (nonatomic,copy) NSString * interactionId;                           //@synthesize interactionId=_interactionId - In the implementation block
@property (nonatomic,copy) NSNumber * onDeviceUtterancesPresent;               //@synthesize onDeviceUtterancesPresent=_onDeviceUtterancesPresent - In the implementation block
@property (nonatomic,copy) NSNumber * originalRank;                            //@synthesize originalRank=_originalRank - In the implementation block
@property (nonatomic,copy) NSNumber * originalScore;                           //@synthesize originalScore=_originalScore - In the implementation block
@property (nonatomic,copy) NSString * previousUtterance;                       //@synthesize previousUtterance=_previousUtterance - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                               //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSString * utteranceSource;                         //@synthesize utteranceSource=_utteranceSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSNumber *)combinedRank;
-(void)setCombinedRank:(NSNumber *)arg1 ;
-(NSNumber *)combinedScore;
-(void)setCombinedScore:(NSNumber *)arg1 ;
-(NSNumber *)onDeviceUtterancesPresent;
-(void)setOnDeviceUtterancesPresent:(NSNumber *)arg1 ;
-(NSNumber *)originalRank;
-(void)setOriginalRank:(NSNumber *)arg1 ;
-(NSNumber *)originalScore;
-(void)setOriginalScore:(NSNumber *)arg1 ;
-(NSString *)previousUtterance;
-(void)setPreviousUtterance:(NSString *)arg1 ;
-(NSString *)utteranceSource;
-(void)setUtteranceSource:(NSString *)arg1 ;
-(NSString *)directAction;
-(void)setDirectAction:(NSString *)arg1 ;
-(void)setHandoffRequestData:(NSData *)arg1 ;
-(void)setCorrectedSpeech:(NSString *)arg1 ;
-(void)setCorrectedSpeechContext:(NSDictionary *)arg1 ;
-(NSNumber *)notifyState;
-(void)setNotifyState:(NSNumber *)arg1 ;
-(NSData *)handoffRequestData;
-(NSString *)handoffURLString;
-(void)setHandoffURLString:(NSString *)arg1 ;
-(NSString *)correctedSpeech;
-(NSDictionary *)correctedSpeechContext;
@end

