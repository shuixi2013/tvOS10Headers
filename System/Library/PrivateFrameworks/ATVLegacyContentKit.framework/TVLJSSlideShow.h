/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:17 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVLLegacyJSContext;

@interface TVLJSSlideShow : NSObject {

	TVLLegacyJSContext* _context;

}

@property (nonatomic,retain) TVLLegacyJSContext * context;              //@synthesize context=_context - In the implementation block
-(TVLLegacyJSContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setContext:(TVLLegacyJSContext *)arg1 ;
-(void)showSlideShowSettingsWithImageProxies:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runSlideShowWithImageProxies:(id)arg1 startingIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

