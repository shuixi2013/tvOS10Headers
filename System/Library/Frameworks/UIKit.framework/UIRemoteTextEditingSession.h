/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIRemoteTextEditingAttributes, NSString;

@interface UIRemoteTextEditingSession : NSObject {

	UIRemoteTextEditingAttributes* _attributes;
	NSString* _text;

}

@property (nonatomic,copy) UIRemoteTextEditingAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * text;                                         //@synthesize text=_text - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIRemoteTextEditingAttributes *)attributes;
-(void)setAttributes:(UIRemoteTextEditingAttributes *)arg1 ;
@end

