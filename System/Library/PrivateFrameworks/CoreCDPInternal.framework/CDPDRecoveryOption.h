/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CDPDRecoveryOption : NSObject {

	NSString* _localizedRecoveryOption;
	/*^block*/id _recoveryHandler;
	long long _recoveryOptionIndex;

}

@property (nonatomic,copy) NSString * localizedRecoveryOption;              //@synthesize localizedRecoveryOption=_localizedRecoveryOption - In the implementation block
@property (nonatomic,copy) id recoveryHandler;                              //@synthesize recoveryHandler=_recoveryHandler - In the implementation block
@property (assign,nonatomic) long long recoveryOptionIndex;                 //@synthesize recoveryOptionIndex=_recoveryOptionIndex - In the implementation block
-(NSString *)localizedRecoveryOption;
-(id)recoveryHandler;
-(void)setLocalizedRecoveryOption:(NSString *)arg1 ;
-(void)setRecoveryHandler:(id)arg1 ;
-(long long)recoveryOptionIndex;
-(void)setRecoveryOptionIndex:(long long)arg1 ;
@end

