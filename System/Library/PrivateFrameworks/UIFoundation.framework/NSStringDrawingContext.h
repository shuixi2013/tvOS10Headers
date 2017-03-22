/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSDictionary, CUICatalog, CUIStyleEffectConfiguration;

@interface NSStringDrawingContext : NSObject {

	double _minimumScaleFactor;
	double _minimumTrackingAdjustment;
	double _actualScaleFactor;
	double _actualTrackingAdjustment;
	CGRect _totalBounds;
	NSDictionary* _linkAttributes;
	CUICatalog* _CUICatalog;
	CUIStyleEffectConfiguration* _CUIStyleEffects;
	unsigned long long _numberOfLineFragments;
	unsigned long long _maximumNumberOfLines;
	double _baselineOffset;
	double _scaledBaselineOffset;
	double _scaledLineHeight;
	double _firstBaselineOffset;
	id _layout;
	struct {
		unsigned _wantsNumberOfLineFragments : 1;
		unsigned _wrapsForTruncationMode : 1;
		unsigned _wantsBaselineOffset : 1;
		unsigned _wantsScaledBaselineOffset : 1;
		unsigned _wantsScaledLineHeight : 1;
		unsigned _drawsDebugBaselines : 1;
		unsigned _cachesLayout : 1;
		unsigned _usesSimpleTextEffects : 1;
		unsigned _activeRenderers : 4;
	}  _sdcFlags;

}

@property (assign,nonatomic) double minimumTrackingAdjustment; 
@property (nonatomic,readonly) double actualTrackingAdjustment; 
@property (assign,nonatomic) double actualScaleFactor;                                   //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) double actualTrackingAdjustment;                            //@synthesize actualTrackingAdjustment=_actualTrackingAdjustment - In the implementation block
@property (assign,nonatomic) CGRect totalBounds;                                         //@synthesize totalBounds=_totalBounds - In the implementation block
@property (assign,nonatomic) BOOL wantsNumberOfLineFragments; 
@property (assign,nonatomic) unsigned long long numberOfLineFragments;                   //@synthesize numberOfLineFragments=_numberOfLineFragments - In the implementation block
@property (assign,nonatomic) BOOL wrapsForTruncationMode; 
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;                    //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL wantsBaselineOffset; 
@property (assign,nonatomic) double baselineOffset;                                      //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) BOOL wantsScaledBaselineOffset; 
@property (assign,nonatomic) double scaledBaselineOffset;                                //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) BOOL wantsScaledLineHeight; 
@property (assign,nonatomic) double scaledLineHeight;                                    //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (assign,nonatomic) double firstBaselineOffset;                                 //@synthesize firstBaselineOffset=_firstBaselineOffset - In the implementation block
@property (nonatomic,retain) CUICatalog * cuiCatalog;                                    //@synthesize CUICatalog=_CUICatalog - In the implementation block
@property (nonatomic,retain) CUIStyleEffectConfiguration * cuiStyleEffects;              //@synthesize CUIStyleEffects=_CUIStyleEffects - In the implementation block
@property (assign,nonatomic) BOOL drawsDebugBaselines; 
@property (assign,nonatomic) BOOL cachesLayout; 
@property (nonatomic,retain) id layout;                                                  //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL usesSimpleTextEffects; 
@property (assign,nonatomic) unsigned long long activeRenderers; 
@property (assign,nonatomic) double minimumScaleFactor;                                  //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
-(CUICatalog *)cuiCatalog;
-(CUIStyleEffectConfiguration *)cuiStyleEffects;
-(double)minimumTrackingAdjustment;
-(BOOL)wantsNumberOfLineFragments;
-(BOOL)wrapsForTruncationMode;
-(BOOL)wantsBaselineOffset;
-(BOOL)wantsScaledBaselineOffset;
-(BOOL)wantsScaledLineHeight;
-(BOOL)drawsDebugBaselines;
-(BOOL)usesSimpleTextEffects;
-(unsigned long long)activeRenderers;
-(void)setActiveRenderers:(unsigned long long)arg1 ;
-(void)setTotalBounds:(CGRect)arg1 ;
-(void)setNumberOfLineFragments:(unsigned long long)arg1 ;
-(void)setFirstBaselineOffset:(double)arg1 ;
-(void)setActualTrackingAdjustment:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(CGRect)totalBounds;
-(void)setWrapsForTruncationMode:(BOOL)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(id)layout;
-(double)actualScaleFactor;
-(void)setActualScaleFactor:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(double)scaledBaselineOffset;
-(void)setScaledBaselineOffset:(double)arg1 ;
-(double)scaledLineHeight;
-(void)setScaledLineHeight:(double)arg1 ;
-(double)minimumScaleFactor;
-(void)setMinimumTrackingAdjustment:(double)arg1 ;
-(void)setDrawsDebugBaselines:(BOOL)arg1 ;
-(void)setCachesLayout:(BOOL)arg1 ;
-(void)setLayout:(id)arg1 ;
-(void)setUsesSimpleTextEffects:(BOOL)arg1 ;
-(void)setCuiCatalog:(CUICatalog *)arg1 ;
-(void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg1 ;
-(void)setWantsBaselineOffset:(BOOL)arg1 ;
-(void)setWantsScaledBaselineOffset:(BOOL)arg1 ;
-(void)setWantsScaledLineHeight:(BOOL)arg1 ;
-(void)setWantsNumberOfLineFragments:(BOOL)arg1 ;
-(double)actualTrackingAdjustment;
-(double)firstBaselineOffset;
-(BOOL)cachesLayout;
-(unsigned long long)numberOfLineFragments;
-(unsigned long long)maximumNumberOfLines;
@end

