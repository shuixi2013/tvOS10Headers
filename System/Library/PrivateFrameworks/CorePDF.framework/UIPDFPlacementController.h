/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject {

	NSMutableArray* _popups;
	CGSize _viewSize;
	UIPDFPageView* pageView;

}

@property (assign,nonatomic) UIPDFPageView * pageView; 
-(void)dealloc;
-(id)viewAtIndex:(unsigned long long)arg1 ;
-(UIPDFPageView *)pageView;
-(void)setPageView:(UIPDFPageView *)arg1 ;
-(id)initWithAnnotations:(id)arg1 viewSize:(CGSize)arg2 ;
-(void)layoutViews:(double)arg1 ;
-(CGRect)boundsForObjectAtIndex:(unsigned long long)arg1 ;
-(double)yForObjectAtIndex:(unsigned long long)arg1 ;
-(void)shift:(double)arg1 ;
@end

