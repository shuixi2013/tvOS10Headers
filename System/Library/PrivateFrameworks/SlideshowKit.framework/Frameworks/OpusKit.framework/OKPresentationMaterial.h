/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableDictionary;

@interface OKPresentationMaterial : OKPresentationCanvas {

	NSString* _templateName;
	NSString* _internalName;
	NSString* _internalClassName;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;
	NSString* _className;

}

@property (nonatomic,copy) NSString * className;              //@synthesize className=_className - In the implementation block
+(id)materialWithName:(id)arg1 templateName:(id)arg2 className:(id)arg3 settings:(id)arg4 userData:(id)arg5 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(void)resolveIfNeeded;
-(id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3 ;
-(id)parentWidget;
-(id)materialTemplate;
@end

