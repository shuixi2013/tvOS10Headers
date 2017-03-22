/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTXParallaxView.h>

@class UIImageView, UIImage;

@interface PTXParallaxImageView : PTXParallaxView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image; 
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(id)initWithImage:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3 ;
@end

