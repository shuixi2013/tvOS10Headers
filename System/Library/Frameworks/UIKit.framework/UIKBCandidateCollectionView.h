/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@class NSIndexPath;

@interface UIKBCandidateCollectionView : UICollectionView

@property (nonatomic,readonly) NSIndexPath * selectedItemIndexPath; 
-(BOOL)delaysContentTouches;
-(void)configureAsCandidatesBar;
-(NSIndexPath *)selectedItemIndexPath;
-(BOOL)_selectAndScrollToItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
@end

