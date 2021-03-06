/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject {

	IKAppContext* _appContext;
	NSMutableDictionary* _managedProperties;

}

@property (nonatomic,retain) NSMutableDictionary * managedProperties;              //@synthesize managedProperties=_managedProperties - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                   //@synthesize appContext=_appContext - In the implementation block
+(void)initialize;
-(id)init;
-(id)jsValueForProperty:(id)arg1 ;
-(void)setJSValue:(id)arg1 forProperty:(id)arg2 ;
-(NSMutableDictionary *)managedProperties;
-(void)setManagedProperties:(NSMutableDictionary *)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(id)invokeMethod:(id)arg1 withArguments:(id)arg2 ;
-(IKAppContext *)appContext;
@end

