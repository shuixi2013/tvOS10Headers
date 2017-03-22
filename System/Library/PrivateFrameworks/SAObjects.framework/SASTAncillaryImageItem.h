/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUINanoImageResource, SAUIDecoratedText, NSString;

@interface SASTAncillaryImageItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ancillaryImageItem;
+(id)ancillaryImageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)title;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)subtitle;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
@end

