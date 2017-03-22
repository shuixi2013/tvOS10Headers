/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTaskDependencyDescription.h>

@class __NSURLSessionTaskDependencyResourceIdentifier;

@interface __NSCFURLSessionTaskDependencyDescription : NSURLSessionTaskDependencyDescription {

	float _priority;
	BOOL _exclusive;
	__NSURLSessionTaskDependencyResourceIdentifier* _dependent;
	__NSURLSessionTaskDependencyResourceIdentifier* _parent;

}
-(id)initWithURLPath:(id)arg1 mimeType:(id)arg2 parentURLPath:(id)arg3 parentMimeType:(id)arg4 priority:(float)arg5 exclusive:(BOOL)arg6 ;
-(void)set_dependent:(id)arg1 ;
-(void)set_parent:(id)arg1 ;
-(id)initWithPriority:(float)arg1 exclusive:(BOOL)arg2 ;
-(BOOL)exclusive;
-(id)_dependent;
-(void)dealloc;
-(id)description;
-(id)_parent;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(void)setExclusive:(BOOL)arg1 ;
@end

