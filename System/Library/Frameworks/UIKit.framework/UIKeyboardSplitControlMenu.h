/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMenuView.h>

@class NSArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {

	CGSize m_preferredSize;
	NSArray* _items;
	/*^block*/id _finishSplitTransitionBlock;

}

@property (nonatomic,copy) id finishSplitTransitionBlock;              //@synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfItems;
-(void)setSplitAndUndocked:(BOOL)arg1 ;
-(void)didFinishSplitTransition;
-(CGSize)preferredSize;
-(unsigned long long)defaultSelectedIndex;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(void)actionForItem:(id)arg1 ;
-(int)visibleItemForIndex:(unsigned long long)arg1 ;
-(void)setFinishSplitTransitionBlock:(id)arg1 ;
-(id)finishSplitTransitionBlock;
@end

