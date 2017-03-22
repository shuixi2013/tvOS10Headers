/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSStorage.h>

@protocol IKJSStorage <JSExport>
@property (nonatomic,readonly) unsigned long long length; 
@required
-(id)getItem:(id)arg1;
-(unsigned long long)length;
-(void)removeItem:(id)arg1;
-(void)clear;
-(id)key:(unsigned long long)arg1;
-(void)setItem:(id)arg1 :(id)arg2;

@end


@protocol IKAppDataStoring, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface IKJSStorage : IKJSObject <IKJSStorage> {

	unsigned _usesExternalDataStore : 1;
	id<IKAppDataStoring> _appStorage;
	NSMutableDictionary* _storageDict;
	NSObject*<OS_dispatch_queue> _storageQueue;

}

@property (nonatomic,retain) NSMutableDictionary * storageDict;                      //@synthesize storageDict=_storageDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storageQueue;              //@synthesize storageQueue=_storageQueue - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppDataStoring> appStorage;                 //@synthesize appStorage=_appStorage - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
-(id)getItem:(id)arg1 ;
-(unsigned long long)length;
-(void)removeItem:(id)arg1 ;
-(void)clear;
-(id)initWithAppContext:(id)arg1 appStorage:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(NSMutableDictionary *)storageDict;
-(void)setStorageDict:(NSMutableDictionary *)arg1 ;
-(void)setStorageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_verifyExternalDataStoreForKey:(id)arg1 ;
-(id<IKAppDataStoring>)appStorage;
-(id)key:(unsigned long long)arg1 ;
-(void)setAppStorage:(id<IKAppDataStoring>)arg1 ;
-(void)setItem:(id)arg1 :(id)arg2 ;
@end

