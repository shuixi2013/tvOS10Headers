/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libswiftCore.dylib/Swift._SwiftNativeNSCharacterSet.h>

@class NSData, NSCharacterSet;

@interface Foundation._SwiftNSCharacterSet : Swift._SwiftNativeNSCharacterSet {

	 __wrapped;

}

@property (readonly,nonatomic) NSData * bitmapRepresentation; 
@property (readonly,nonatomic) NSCharacterSet * invertedSet; 
@property (readonly,nonatomic) Class classForCoder; 
-(NSData *)bitmapRepresentation;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(NSCharacterSet *)invertedSet;
-(id)init;
-(id)copyWithZone:(void*)arg1 ;
-(Class)classForCoder;
-(id)mutableCopyWithZone:(void*)arg1 ;
-(id)initWithImmutableObject:(id)arg1 ;
-(id)initWithMutableObject:(id)arg1 ;
-(id)initWithUnmanagedImmutableObject:(id*)arg1 ;
-(id)initWithUnmanagedMutableObject:(id*)arg1 ;
@end

