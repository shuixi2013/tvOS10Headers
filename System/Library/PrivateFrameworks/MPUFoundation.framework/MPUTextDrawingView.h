/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKit/UIView.h>

@class MPUTextDrawingContext, NSString;

@interface MPUTextDrawingView : UIView {

	double _cachedDisplayScale;
	MPUTextDrawingContext* _textDrawingContext;

}

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,retain) MPUTextDrawingContext * textDrawingContext;              //@synthesize textDrawingContext=_textDrawingContext - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)text;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)_cachedDisplayScale;
-(void)setTextDrawingContext:(MPUTextDrawingContext *)arg1 ;
-(MPUTextDrawingContext *)textDrawingContext;
@end

