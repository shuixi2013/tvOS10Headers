/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MTLLibrary <NSObject>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
@required
-(void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(id)newFunctionWithName:(id)arg1;
-(NSArray *)functionNames;
-(id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
-(id<MTLDevice>)device;

@end

