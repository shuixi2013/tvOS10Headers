/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, NSString;

@interface _UIPopoverViewBackgroundComponentView : UIView {

	NSMutableArray* _replicants;
	NSString* _directionSelector;

}

@property (nonatomic,copy) NSString * directionSelector;              //@synthesize directionSelector=_directionSelector - In the implementation block
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_newReplicant;
-(void)setDirectionSelector:(NSString *)arg1 ;
-(id)replicate;
-(void)updateReplicants;
-(NSString *)directionSelector;
@end

