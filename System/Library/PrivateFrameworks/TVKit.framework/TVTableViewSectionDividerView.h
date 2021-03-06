/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView;

@interface TVTableViewSectionDividerView : UITableViewHeaderFooterView {

	UIView* _lineView;
	double _topPadding;
	unsigned long long _dividerType;

}

@property (assign,nonatomic) unsigned long long dividerType;              //@synthesize dividerType=_dividerType - In the implementation block
+(double)heightForDividerType:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_updatePadding;
-(void)setDividerType:(unsigned long long)arg1 ;
-(unsigned long long)dividerType;
@end

