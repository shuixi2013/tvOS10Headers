/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActivity.h>

@class SFAirDropActivityViewController;

@interface _UIAirDropActivity : UIActivity {

	SFAirDropActivityViewController* _airDropViewController;
	/*^block*/id _airdropCompletion;
	long long _maxPreviews;

}

@property (nonatomic,retain) SFAirDropActivityViewController * airDropViewController;              //@synthesize airDropViewController=_airDropViewController - In the implementation block
@property (nonatomic,copy) id airdropCompletion;                                                   //@synthesize airdropCompletion=_airdropCompletion - In the implementation block
@property (assign,nonatomic) long long maxPreviews;                                                //@synthesize maxPreviews=_maxPreviews - In the implementation block
-(id)activityType;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setAirDropViewController:(SFAirDropActivityViewController *)arg1 ;
-(SFAirDropActivityViewController *)airDropViewController;
-(void)setAirdropCompletion:(id)arg1 ;
-(void)setMaxPreviews:(long long)arg1 ;
-(CGSize)_thumbnailSize;
-(long long)maxPreviews;
-(id)airdropCompletion;
@end

