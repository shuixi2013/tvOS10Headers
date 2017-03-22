/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@interface UITextFieldLabel : UILabel {

	BOOL _shouldRenderWithoutTextField;

}

@property (assign,nonatomic) BOOL shouldRenderWithoutTextField;              //@synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField - In the implementation block
+(id)defaultFont;
+(id)_defaultAttributes;
-(void)drawTextInRect:(CGRect)arg1 ;
-(BOOL)_shouldDrawUnderlinesLikeWebKit;
-(BOOL)shouldRenderWithoutTextField;
-(void)_defaultDrawTextInRect:(CGRect)arg1 ;
-(void)setShouldRenderWithoutTextField:(BOOL)arg1 ;
@end

