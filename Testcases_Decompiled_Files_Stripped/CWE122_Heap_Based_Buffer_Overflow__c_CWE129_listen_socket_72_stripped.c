
undefined8 FUN_00103ebc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00104309(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_001040b8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001049aa(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00105324(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001052ed,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_0010427e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001044bc(param_1,param_2,param_3);
  return;
}




long FUN_001040a2(long param_1)

{
  return param_1 + 8;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102550();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00103b17(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104068(param_1,param_2,param_3);
  return;
}




long FUN_0010331b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103b96(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103b96(param_2);
  return lVar1 - *plVar2 >> 2;
}




long FUN_0010461d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00102904(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e4a(local_58);
  local_64 = 7;
  local_60 = FUN_00102f50(local_58);
  FUN_00102fa0(local_38,&local_60);
                    /* try { // try from 00102974 to 00102a09 has its CatchHandler @ 00102a55 */
  FUN_00102fce(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102f50(local_58);
  FUN_00102fa0(local_38,&local_60);
  FUN_00102fce(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102f50(local_58);
  FUN_00102fa0(local_38,&local_60);
  FUN_00102fce(local_58,local_38[0],1,&local_64);
  FUN_00103094(local_38,local_58);
                    /* try { // try from 00102a11 to 00102a15 has its CatchHandler @ 00102a40 */
  FUN_00104b34(local_38);
  FUN_00102f08(local_38);
  FUN_00102f08(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ad2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104032(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103a7a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103b74(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105526(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00105227(void)

{
  return;
}




undefined8 FUN_00103959(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103f4b(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104ef8(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103b74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103094(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001039aa(param_2);
  FUN_00103959(&local_31,uVar1);
  uVar1 = FUN_00103932(param_2);
                    /* try { // try from 001030fa to 001030fe has its CatchHandler @ 00103167 */
  FUN_001039bc(param_1,uVar1,&local_31);
  FUN_00102e96(&local_31);
  uVar2 = FUN_00103250(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103a7a(param_2);
  uVar4 = FUN_00103a22(param_2);
                    /* try { // try from 00103148 to 0010314c has its CatchHandler @ 00103185 */
  uVar1 = FUN_00103ad2(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001054e8(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010417d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010443c(param_1,param_2,param_3);
  return;
}




void FUN_00104384(void)

{
  return;
}




void FUN_00102e4a(undefined8 param_1)

{
  FUN_00102e2a(param_1);
  return;
}




void FUN_001040ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001040b8(param_3);
  FUN_001043c8(param_1,param_2,uVar1);
  return;
}




void FUN_001052a0(void)

{
  return;
}




void FUN_001044bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104693(param_1,param_2,param_3);
  return;
}




void FUN_00105232(void)

{
  return;
}




void FUN_001039bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103fa2(param_1,param_3);
                    /* try { // try from 001039f6 to 001039fa has its CatchHandler @ 001039fd */
  FUN_00103fd8(param_1,param_2);
  return;
}




void FUN_001047c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001048b3(param_2);
  uVar2 = FUN_001048b3(param_1);
  FUN_001048d9(uVar2,uVar1,param_3);
  return;
}




void FUN_001052d7(void)

{
  return;
}




void * FUN_001049f4(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_0010441e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001052c1(void)

{
  return;
}




void FUN_001042b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039aa(param_1);
  FUN_001044ed(uVar1);
  return;
}




void FUN_00103c3c(undefined8 param_1)

{
  FUN_001040a2(param_1);
  return;
}




void FUN_00104032(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104397(param_1,param_2,param_3);
  return;
}




void FUN_00104a57(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00104cf8(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00104d1c("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104d74(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00104068(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




ulong * FUN_001046ff(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102609(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined local_88 [32];
  undefined8 local_68 [4];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e4a(local_88);
  local_a0 = -1;
  local_98 = 0xffffffff;
  local_9c = -1;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_98,&local_48,0x10);
                    /* try { // try from 00102703 to 0010288b has its CatchHandler @ 001028d7 */
    if (((iVar1 != -1) && (iVar1 = listen(local_98,5), iVar1 != -1)) &&
       (local_9c = accept(local_98,(sockaddr *)0x0,(socklen_t *)0x0), local_9c != -1)) {
      sVar2 = recv(local_9c,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_a0 = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  if (local_9c != -1) {
    close(local_9c);
  }
  local_90 = FUN_00102f50(local_88);
  FUN_00102fa0(local_68,&local_90);
  FUN_00102fce(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00102f50(local_88);
  FUN_00102fa0(local_68,&local_90);
  FUN_00102fce(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00102f50(local_88);
  FUN_00102fa0(local_68,&local_90);
  FUN_00102fce(local_88,local_68[0],1,&local_a0);
  FUN_00103094(local_68,local_88);
                    /* try { // try from 00102893 to 00102897 has its CatchHandler @ 001028c2 */
  FUN_00104a57(local_68);
  FUN_00102f08(local_68);
  FUN_00102f08(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00104131(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010441e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001039aa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103a22(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103b74(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031d4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103d97(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010427e(param_1,param_2,param_3);
  return;
}




ulong FUN_0010500c(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060f4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ef3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104337(param_2);
  uVar2 = FUN_00104337(param_1);
  FUN_0010417d(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001045ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047c6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001032b2(undefined8 param_1)

{
  return param_1;
}




void FUN_00104e9e(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105560(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




undefined8 FUN_001032c4(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103b74(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104d9c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103360(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_00103dcc(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103880(local_80);
      local_60 = FUN_00103c5a(&local_88,&local_78);
      local_70 = FUN_00103ebc(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00103250(local_80);
                    /* try { // try from 0010366a to 001036f5 has its CatchHandler @ 001037ad */
      FUN_00103d97(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00103250(local_80);
      puVar2 = (undefined8 *)FUN_001032b2(&local_88);
      local_70 = FUN_00103ef3(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00103250(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001032b2(&local_88);
      local_70 = FUN_00103ef3(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00103250(local_80);
      FUN_00103262(*local_80,local_80[1],uVar1);
      FUN_00103216(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00103ba8(local_38,param_1,param_4);
                    /* try { // try from 001033ea to 001035bd has its CatchHandler @ 0010378f */
      local_50 = FUN_00103c3c(local_38);
      local_78 = FUN_00102f50(local_80);
      local_48 = FUN_00103c5a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00103250(local_80);
        FUN_00103c9e(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001032b2(&local_88);
        FUN_00103cf6(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001032b2(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001032b2(&local_88);
        FUN_00103d46(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00103250(local_80);
        lVar4 = FUN_00103d97(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00103250(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001032b2(&local_88);
        FUN_00103c9e(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001032b2(&local_88);
        FUN_00103d46(*puVar2,local_40,local_50);
      }
      FUN_00103c08(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001048d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00104232(param_3);
  uVar2 = FUN_00104232(local_28);
  uVar3 = FUN_00104232(local_20);
  uVar1 = FUN_001049bf(uVar3,uVar2,uVar1);
  FUN_001044a6(&local_30,uVar1);
  return;
}




void FUN_00102e6a(undefined8 param_1)

{
  FUN_001031b4(param_1);
  FUN_001031d4(param_1);
  return;
}




void FUN_00104244(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




ulong * FUN_001042da(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001052cc(void)

{
  return;
}




long FUN_00103c5a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001032b2(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001032b2(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00104d42(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001052e2(void)

{
  return;
}




void FUN_00104107(undefined8 param_1,undefined8 param_2)

{
  FUN_0010440a(param_1,param_2);
  return;
}




void FUN_001052b6(void)

{
  return;
}




undefined8 FUN_00102f50(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103290(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103216(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103b17(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102d7a(void)

{
  FUN_00102904();
  FUN_00102a7f();
  return;
}




ulong FUN_00105110(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060fc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 * FUN_00104816(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00102a7f(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined local_88 [32];
  undefined8 local_68 [4];
  sockaddr local_48;
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e4a(local_88);
  local_a0 = -1;
  local_98 = 0xffffffff;
  local_9c = -1;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data[2] = '\0';
    local_48.sa_data[3] = '\0';
    local_48.sa_data[4] = '\0';
    local_48.sa_data[5] = '\0';
    local_48.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(local_98,&local_48,0x10);
                    /* try { // try from 00102b79 to 00102d01 has its CatchHandler @ 00102d4d */
    if (((iVar1 != -1) && (iVar1 = listen(local_98,5), iVar1 != -1)) &&
       (local_9c = accept(local_98,(sockaddr *)0x0,(socklen_t *)0x0), local_9c != -1)) {
      sVar2 = recv(local_9c,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_a0 = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  if (local_9c != -1) {
    close(local_9c);
  }
  local_90 = FUN_00102f50(local_88);
  FUN_00102fa0(local_68,&local_90);
  FUN_00102fce(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00102f50(local_88);
  FUN_00102fa0(local_68,&local_90);
  FUN_00102fce(local_88,local_68[0],1,&local_a0);
  local_90 = FUN_00102f50(local_88);
  FUN_00102fa0(local_68,&local_90);
  FUN_00102fce(local_88,local_68[0],1,&local_a0);
  FUN_00103094(local_68,local_88);
                    /* try { // try from 00102d09 to 00102d0d has its CatchHandler @ 00102d38 */
  FUN_00104c11(local_68);
  FUN_00102f08(local_68);
  FUN_00102f08(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010525e(void)

{
  return;
}




void FUN_00103b08(void)

{
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e98)();
  return;
}




void FUN_00104b34(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00104cf8(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_00104d1c("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104d74(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




undefined8 FUN_00103b96(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001041b2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f78(undefined8 param_1,undefined8 param_2)

{
  FUN_00104384(param_1,param_2);
  return;
}




void FUN_00103d46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104232(param_2);
  uVar2 = FUN_00104232(param_1);
  FUN_00104244(uVar2,uVar1,param_3);
  return;
}




void FUN_00104758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00104232(param_3);
  uVar2 = FUN_0010485d(local_28);
  uVar3 = FUN_0010485d(local_20);
  uVar1 = FUN_0010487e(uVar3,uVar2,uVar1);
  FUN_001044a6(&local_30,uVar1);
  return;
}




void FUN_00105507(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00104471(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010461d(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001038cc(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00103290(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




undefined8 FUN_0010485d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103b96(&local_10);
  return *puVar1;
}




void FUN_00103fd8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103ebc(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00105253(void)

{
  return;
}




void FUN_00104d1c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104556(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010472e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00104e48(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00104309(undefined8 param_1,undefined8 param_2)

{
  FUN_00104556(param_1,param_2,0);
  return;
}




void FUN_00104c11(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_00104cf8(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_00104d1c("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00104d74(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00103c9e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104131(param_2);
  uVar2 = FUN_00104131(param_1);
  FUN_0010417d(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103880(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103290(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010408f(void)

{
  return;
}




undefined8 FUN_001051ef(void)

{
  return 1;
}




void FUN_00104fac(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010487e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104947(param_1,param_2,param_3);
  return;
}




void FUN_001055d0(void)

{
  return;
}




void * FUN_00104947(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




long FUN_00104cf8(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




undefined8 FUN_0010544c(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00102df4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010528a(void)

{
  return;
}




undefined8 FUN_0010472e(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00102fa0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001032b2(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103b49(undefined8 param_1,undefined8 param_2)

{
  FUN_0010408f(param_1,param_2);
  return;
}




void FUN_0010440a(void)

{
  return;
}




void FUN_001052ab(void)

{
  return;
}




void FUN_00104dc8(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010523d(void)

{
  return;
}




undefined8 FUN_001044ed(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001046e1(param_1);
  puVar1 = (undefined8 *)FUN_001046ff(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102eb6(long *param_1)

{
  FUN_00103216(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00102e0a(param_1);
  return;
}




void FUN_001052ed(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00104f79(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00105274(void)

{
  return;
}




void FUN_00103262(undefined8 param_1,undefined8 param_2)

{
  FUN_00103b49(param_1,param_2);
  return;
}




void FUN_00103cf6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001041b2(param_2);
  uVar2 = FUN_001041b2(param_1);
  FUN_001041c4(uVar2,uVar1,param_3);
  return;
}




void FUN_001041c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00104232(param_3);
  uVar2 = FUN_00104232(local_28);
  uVar3 = FUN_00104232(local_20);
  uVar1 = FUN_00104471(uVar3,uVar2,uVar1);
  FUN_001044a6(&local_30,uVar1);
  return;
}




void FUN_001046e1(undefined8 param_1)

{
  FUN_0010472e(param_1);
  return;
}




bool FUN_001053f1(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




undefined8 FUN_00104746(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102d8f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104d1c("Calling good()...");
  FUN_00102d7a();
  FUN_00104d1c("Finished good()");
  FUN_00104d1c("Calling bad()...");
  FUN_00102609();
  FUN_00104d1c("Finished bad()");
  return 0;
}




undefined8 FUN_00104337(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010441e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010459c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104746(param_2);
  uVar2 = FUN_00104746(param_1);
  FUN_00104758(uVar2,uVar1,param_3);
  return;
}




long FUN_00103932(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00103c08(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001040a2(param_1);
  FUN_00104107(*param_1,uVar1);
  return;
}




undefined8 FUN_001051fe(void)

{
  return 0;
}




void FUN_00105269(void)

{
  return;
}




ulong FUN_00103dcc(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_001042b4(param_1);
  lVar2 = FUN_00103932(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103932(local_40);
  local_30 = FUN_00103932(local_40);
  plVar3 = (long *)FUN_001042da(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103932(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001042b4(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001042b4(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00105295(void)

{
  return;
}




undefined8 FUN_0010546f(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00103fa2(undefined8 param_1,undefined8 param_2)

{
  FUN_00103f78(param_1,param_2);
  FUN_001031d4(param_1);
  return;
}




void FUN_00103206(void)

{
  return;
}




undefined8 FUN_001044a6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102e96(undefined8 param_1)

{
  FUN_00103206(param_1);
  return;
}




int FUN_0010520d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00104e73(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001031b4(undefined8 param_1)

{
  FUN_00103b08(param_1);
  return;
}




void FUN_00104d74(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102e0a(undefined8 param_1)

{
  FUN_00102e96(param_1);
  return;
}




void FUN_00102e2a(undefined8 param_1)

{
  FUN_00102e6a(param_1);
  return;
}




void FUN_0010443c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001045ec(param_1,param_2,param_3);
  return;
}




void FUN_00104693(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104232(param_1);
  uVar1 = FUN_00104816(uVar1,param_2,param_3);
  FUN_001044a6(&local_10,uVar1);
  return;
}




void FUN_00104e1d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001043c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_001040b8(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00102df4(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00103f4b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103f78(param_1,param_2);
  return param_1;
}




undefined8 FUN_00103250(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f08(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103250(param_1);
  FUN_00103262(*param_1,param_1[1],uVar1);
  FUN_00102eb6(param_1);
  return;
}




void FUN_001049bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001049f4(param_1,param_2,param_3);
  return;
}




void FUN_00105248(void)

{
  return;
}




void FUN_00104df2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104f4b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103ba8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001040b8(param_3);
  uVar2 = FUN_001040a2(param_1);
  FUN_001040ca(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010527f(void)

{
  return;
}




void FUN_00104f20(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102fce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_001032c4(param_1);
  local_18 = FUN_0010331b(&local_38,&local_20);
  local_20 = FUN_00103880(local_30);
  uVar1 = FUN_001038cc(&local_20,local_18);
  FUN_00103360(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103880(local_30);
  FUN_001038cc(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104232(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_00104397(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010459c(param_1,param_2,param_3);
  return;
}




void FUN_001048b3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001049aa(&local_10);
  FUN_001041b2(uVar1);
  return;
}




void FUN_00103290(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



