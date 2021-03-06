/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActionSheetPresentationControllerVisualStyle.h>

@class UIColor, UIActionSheetiOSDismissActionView, NSString;

@interface _UIActionSheetPresentationControllerVisualStyleiOS : NSObject <UIActionSheetPresentationControllerVisualStyle> {

	UIActionSheetiOSDismissActionView* _dismissActionView;

}

@property (nonatomic,retain) UIActionSheetiOSDismissActionView * dismissActionView;              //@synthesize dismissActionView=_dismissActionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIEdgeInsets contentInsets; 
@property (readonly) UIColor * dimmingViewColor; 
@property (readonly) double cornerRadius; 
-(id)init;
-(UIEdgeInsets)contentInsets;
-(double)cornerRadius;
-(UIActionSheetiOSDismissActionView *)dismissActionView;
-(void)setDismissActionView:(UIActionSheetiOSDismissActionView *)arg1 ;
-(UIColor *)dimmingViewColor;
@end

