/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextViewInteractableItem.h>

@class NSURL;

@interface _UITextViewInteractableLink : _UITextViewInteractableItem {

	NSURL* _link;

}

@property (nonatomic,retain) NSURL * link;              //@synthesize link=_link - In the implementation block
+(id)interactableLinkWithURL:(id)arg1 range:(NSRange)arg2 subRange:(NSRange)arg3 ;
-(id)actions;
-(id)localizedTitle;
-(NSURL *)link;
-(BOOL)allowInteraction:(long long)arg1 ;
-(id)defaultAction;
-(void)setLink:(NSURL *)arg1 ;
-(id)linkActions;
-(void)_linkInteractionOpenURL;
-(void)_linkInteractionCopyLink;
-(void)_linkInteractionShareLink;
-(BOOL)_linkInteractionPerformDefaultAction;
@end

