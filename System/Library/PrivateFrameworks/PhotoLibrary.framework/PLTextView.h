/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UITextView.h>

@class UILabel;

@interface PLTextView : UITextView {

	UILabel* _placeholder;
	BOOL _showingPlaceholder;

}
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(id)_placeholder;
-(void)updatePlaceholder;
@end
