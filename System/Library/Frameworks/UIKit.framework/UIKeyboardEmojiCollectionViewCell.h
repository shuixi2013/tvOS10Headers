/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIKeyboardEmoji;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {

	UILabel* _emojiLabel;
	UIKeyboardEmoji* _emoji;

}

@property (nonatomic,copy) UIKeyboardEmoji * emoji;                //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long emojiFontSize; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)debugDescription;
-(UIKeyboardEmoji *)emoji;
-(void)setEmoji:(UIKeyboardEmoji *)arg1 ;
-(void)setEmojiFontSize:(long long)arg1 ;
-(long long)emojiFontSize;
@end

