/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TVCKUIFactory : NSObject {

	NSArray* _factories;

}

@property (nonatomic,copy) NSArray * factories;              //@synthesize factories=_factories - In the implementation block
+(id)sharedInstance;
-(void)_registerViewElements;
-(void)setFactories:(NSArray *)arg1 ;
-(NSArray *)factories;
-(void)setup;
@end

