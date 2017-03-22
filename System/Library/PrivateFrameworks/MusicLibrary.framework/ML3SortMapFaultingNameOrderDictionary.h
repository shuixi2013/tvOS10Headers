/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class ML3DatabaseConnection, NSMutableDictionary;

@interface ML3SortMapFaultingNameOrderDictionary : NSMutableDictionary {

	ML3DatabaseConnection* _connection;
	NSMutableDictionary* _dirtyInserts;

}
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)keyEnumerator;
-(id)initWithConnection:(id)arg1 ;
@end

