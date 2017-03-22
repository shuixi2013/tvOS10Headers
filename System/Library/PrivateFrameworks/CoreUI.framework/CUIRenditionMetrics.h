/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIRenditionMetrics : NSObject {

	CGSize _imageSize;
	CGSize _edgeBottomLeftMargin;
	CGSize _edgeTopRightMargin;
	CGSize _contentBottomLeftMargin;
	CGSize _contentTopRightMargin;
	double _baseline;
	CGSize _auxiliary1BottomLeftMargin;
	CGSize _auxiliary1TopRightMargin;
	CGSize _auxiliary2BottomLeftMargin;
	CGSize _auxiliary2TopRightMargin;
	double _scale;
	struct {
		unsigned scalesVertically : 1;
		unsigned scalesHorizontally : 1;
		unsigned reserved : 14;
	}  _crmFlags;

}
-(id)initwithImageSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithImageSize:(CGSize)arg1 edgeBottomLeft:(CGSize)arg2 edgeTopRight:(CGSize)arg3 contentBottomLeft:(CGSize)arg4 contentTopRight:(CGSize)arg5 baseline:(double)arg6 auxiliary1BottomLeft:(CGSize)arg7 auxiliary1TopRight:(CGSize)arg8 auxiliary2BottomLeft:(CGSize)arg9 auxiliary2TopRight:(CGSize)arg10 scalesVertically:(BOOL)arg11 scalesHorizontally:(BOOL)arg12 scale:(double)arg13 ;
-(CGSize)edgeBottomLeftMargin;
-(CGSize)edgeTopRightMargin;
-(CGSize)contentBottomLeftMargin;
-(CGSize)contentTopRightMargin;
-(double)baseline;
-(CGSize)auxiliary1BottomLeftMargin;
-(CGSize)auxiliary1TopRightMargin;
-(CGSize)auxiliary2BottomLeftMargin;
-(CGSize)auxiliary2TopRightMargin;
-(BOOL)scalesVertically;
-(BOOL)scalesHorizontally;
-(CGRect)edgeRect;
-(CGRect)insetRectWithMetrics:(CGRect)arg1 ;
-(CGRect)insetContentRectWithMetrics:(CGRect)arg1 ;
-(BOOL)hasOpaqueContentBounds;
-(BOOL)hasAlignmentEdgeMargins;
-(double)scale;
-(CGSize)imageSize;
-(CGRect)contentRect;
@end

