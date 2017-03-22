/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIScreenMode : NSObject {

	id _mode;
	BOOL _mainScreen;

}

@property (setter=_setMainScreen:,getter=_isMainScreen) BOOL _mainScreen;              //@synthesize mainScreen=_mainScreen - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double pixelAspectRatio; 
+(id)_screenModeForDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(CGSize)size;
-(id)description;
-(BOOL)_isMainScreen;
-(id)_displayMode;
-(id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(CGSize)_sizeWithLevel:(unsigned long long)arg1 ;
-(double)pixelAspectRatio;
-(void)_setMainScreen:(BOOL)arg1 ;
@end

