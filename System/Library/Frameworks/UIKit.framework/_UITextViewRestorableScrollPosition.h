/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {

	NSRange _range;
	double _offsetInLine;

}
+(id)restorableScrollPositionForTextView:(id)arg1 ;
+(id)restorableScrollPositionForStateRestoration:(id)arg1 ;
+(id)restorableScrollPositionWithRange:(NSRange)arg1 ;
+(id)restorableScrollPositionWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSRange)range;
-(id)dictionaryRepresentation;
-(id)initWithTextView:(id)arg1 ;
-(double)offsetWithinLine;
-(id)initWithTextViewForStateRestoration:(id)arg1 ;
@end

