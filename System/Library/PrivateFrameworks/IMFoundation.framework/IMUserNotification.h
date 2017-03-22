/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface IMUserNotification : NSObject {

	id _reserved;

}

@property (nonatomic,retain,readonly) id identifier; 
@property (nonatomic,readonly) double timeout; 
@property (nonatomic,readonly) unsigned long long displayFlags; 
@property (nonatomic,retain,readonly) NSDictionary * displayInformation; 
@property (assign,nonatomic) BOOL showInLockScreen; 
@property (assign,nonatomic) BOOL usesNotificationCenter; 
@property (nonatomic,retain) NSString * representedApplicationBundle; 
@property (nonatomic,readonly) unsigned long long response; 
@property (nonatomic,readonly) unsigned long long responseFlags; 
@property (nonatomic,retain,readonly) NSDictionary * responseInformation; 
@property (nonatomic,retain) NSDictionary * userInfo; 
+(id)userNotificationWithIdentifier:(id)arg1 timeout:(double)arg2 alertLevel:(unsigned long long)arg3 displayFlags:(unsigned long long)arg4 displayInformation:(id)arg5 ;
+(id)userNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButton:(id)arg4 alternateButton:(id)arg5 otherButton:(id)arg6 ;
-(void)dealloc;
-(id)identifier;
-(unsigned long long)response;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(double)timeout;
-(id)_initWithIdentifier:(id)arg1 timeout:(double)arg2 displayFlags:(unsigned long long)arg3 displayInformation:(id)arg4 ;
-(unsigned long long)responseFlags;
-(NSDictionary *)displayInformation;
-(unsigned long long)displayFlags;
-(NSString *)representedApplicationBundle;
-(void)setRepresentedApplicationBundle:(NSString *)arg1 ;
-(BOOL)showInLockScreen;
-(void)setShowInLockScreen:(BOOL)arg1 ;
-(BOOL)usesNotificationCenter;
-(void)setUsesNotificationCenter:(BOOL)arg1 ;
-(NSDictionary *)responseInformation;
-(void)_setResponseFlags:(unsigned long long)arg1 responseInformation:(id)arg2 ;
@end

