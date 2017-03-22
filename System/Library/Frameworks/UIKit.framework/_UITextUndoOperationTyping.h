/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSUndoTextOperation.h>

@class NSMutableAttributedString;

@interface _UITextUndoOperationTyping : NSUndoTextOperation {

	NSRange _replacementRange;
	NSMutableAttributedString* _attributedString;

}
-(BOOL)coalesceAffectedRange:(NSRange)arg1 replacementRange:(NSRange)arg2 selectedRange:(NSRange)arg3 textStorage:(id)arg4 ;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 replacementRange:(NSRange)arg3 ;
-(void)undoRedo;
-(BOOL)supportsCoalescing;
@end
