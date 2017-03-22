/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject {

	double _actualScaleFactor;
	double _baselineOffset;
	double _scaledBaselineOffset;
	double _scaledLineHeight;
	NSAttributedString* _scaledAttributedText;
	CGSize _targetSize;
	CGSize _scaledSize;

}

@property (assign,nonatomic) CGSize targetSize;                                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGSize scaledSize;                                      //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) double actualScaleFactor;                               //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) double baselineOffset;                                  //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) double scaledBaselineOffset;                            //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) double scaledLineHeight;                                //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (nonatomic,retain) NSAttributedString * scaledAttributedText;              //@synthesize scaledAttributedText=_scaledAttributedText - In the implementation block
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(CGSize)scaledSize;
-(void)setScaledSize:(CGSize)arg1 ;
-(double)actualScaleFactor;
-(void)setActualScaleFactor:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(double)scaledBaselineOffset;
-(void)setScaledBaselineOffset:(double)arg1 ;
-(double)scaledLineHeight;
-(void)setScaledLineHeight:(double)arg1 ;
-(NSAttributedString *)scaledAttributedText;
-(void)setScaledAttributedText:(NSAttributedString *)arg1 ;
@end

