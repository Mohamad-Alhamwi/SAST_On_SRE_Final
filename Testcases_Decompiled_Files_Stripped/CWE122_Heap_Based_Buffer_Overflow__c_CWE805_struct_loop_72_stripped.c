
void FUN_0010377f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103956(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103c3d(void)

{
  return;
}




void FUN_0010392b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103092(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102d7e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ab9(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00101b30(undefined8 param_1)

{
  FUN_00101e7a(param_1);
  FUN_00101e9a(param_1);
  return;
}




void FUN_00103424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ef8(param_3);
  uVar2 = FUN_0010352d(local_28);
  uVar3 = FUN_0010352d(local_20);
  uVar1 = FUN_0010354e(uVar3,uVar2,uVar1);
  FUN_00103172(&local_30,uVar1);
  return;
}




undefined8 FUN_00103172(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00103d2f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103cf8,local_18);
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




void FUN_00101b5c(undefined8 param_1)

{
  FUN_00101ecc(param_1);
  return;
}




void FUN_001027ce(void)

{
  return;
}




void FUN_0010283a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001033fa(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102682(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c68(param_1,param_3);
                    /* try { // try from 001026bc to 001026c0 has its CatchHandler @ 001026c3 */
  FUN_00102c9e(param_1,param_2);
  return;
}




void FUN_001029bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e78(param_2);
  uVar2 = FUN_00102e78(param_1);
  FUN_00102e8a(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_001033cb(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001032b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103492(param_1,param_2,param_3);
  return;
}




void FUN_00101af0(undefined8 param_1)

{
  FUN_00101b30(param_1);
  return;
}




undefined8 * FUN_001034e2(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




ulong FUN_00103b1b(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016f4(param_1,2);
  __ptr = (void *)*puVar1;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(local_348 * 8 + (long)__ptr) = (&uStack_338)[local_348];
  }
  FUN_00103984(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c74(void)

{
  return;
}




void FUN_00102f7e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102670(param_1);
  FUN_001031b9(uVar1);
  return;
}




ulong FUN_00102a92(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f7e(param_1);
  lVar2 = FUN_001025f8(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001025f8(local_40);
  local_30 = FUN_001025f8(local_40);
  plVar3 = (long *)FUN_00102fa4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001025f8(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f7e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f7e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103984(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00101f8a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010283a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102e8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ef8(param_3);
  uVar2 = FUN_00102ef8(local_28);
  uVar3 = FUN_00102ef8(local_20);
  uVar1 = FUN_0010313d(uVar3,uVar2,uVar1);
  FUN_00103172(&local_30,uVar1);
  return;
}




undefined8 FUN_00102df7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030ea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102920(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f78(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f78(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103ccc(void)

{
  return;
}




void FUN_0010335f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ef8(param_1);
  uVar1 = FUN_001034e2(uVar1,param_2,param_3);
  FUN_00103172(&local_10,uVar1);
  return;
}




void FUN_00103f60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102bb9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103001(param_2);
  uVar2 = FUN_00103001(param_1);
  FUN_00102e43(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103ca0(void)

{
  return;
}




void FUN_00103c48(void)

{
  return;
}




void FUN_001035a9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ef8(param_3);
  uVar2 = FUN_00102ef8(local_28);
  uVar3 = FUN_00102ef8(local_20);
  uVar1 = FUN_0010368f(uVar3,uVar2,uVar1);
  FUN_00103172(&local_30,uVar1);
  return;
}




void FUN_0010387e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001038a9(undefined4 param_1)

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




undefined8 FUN_00103e7a(undefined8 *param_1)

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




ulong FUN_00103a17(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001032e9(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001033ad(undefined8 param_1)

{
  FUN_001033fa(param_1);
  return;
}




void FUN_001028ce(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d68(param_1);
  FUN_00102dcd(*param_1,uVar1);
  return;
}




void FUN_00101a44(void)

{
  FUN_001018ae();
  return;
}




void FUN_00103727(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e7a(undefined8 param_1)

{
  FUN_001027ce(param_1);
  return;
}




undefined8 FUN_00102e78(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102592(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f56(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037a7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103cf8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032b8(param_1,param_2,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_0010313d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032e9(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102fa4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010335f(param_1,param_2,param_3);
  return;
}




void FUN_00103c32(void)

{
  return;
}




long FUN_00101fe1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010285c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010285c(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103c53(void)

{
  return;
}




long FUN_00102d68(long param_1)

{
  return param_1 + 8;
}




void * FUN_00103617(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101718(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b10(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(400);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101c16(local_58);
  FUN_00101c66(local_38,&local_60);
                    /* try { // try from 001017a3 to 00101838 has its CatchHandler @ 00101884 */
  FUN_00101c94(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c16(local_58);
  FUN_00101c66(local_38,&local_60);
  FUN_00101c94(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c16(local_58);
  FUN_00101c66(local_38,&local_60);
  FUN_00101c94(local_58,local_38[0],1,&local_68);
  FUN_00101d5a(local_38,local_58);
                    /* try { // try from 00101840 to 00101844 has its CatchHandler @ 0010186f */
  FUN_001014e9(local_38);
  FUN_00101bce(local_38);
  FUN_00101bce(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e43(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103108(param_1,param_2,param_3);
  return;
}




long FUN_001016f4(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001039b7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001030d6(void)

{
  return;
}




void FUN_00103fd0(void)

{
  return;
}




undefined8 FUN_00103412(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fd3(undefined8 param_1,undefined8 param_2)

{
  FUN_00103222(param_1,param_2,0);
  return;
}




void FUN_00101e9a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102670(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010352d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010285c(&local_10);
  return *puVar1;
}




undefined8 FUN_00103bfa(void)

{
  return 1;
}




void FUN_001037fd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void * FUN_001036c4(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103f31(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d5a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102670(param_2);
  FUN_0010261f(&local_31,uVar1);
  uVar1 = FUN_001025f8(param_2);
                    /* try { // try from 00101dc0 to 00101dc4 has its CatchHandler @ 00101e2d */
  FUN_00102682(param_1,uVar1,&local_31);
  FUN_00101b5c(&local_31);
  uVar2 = FUN_00101f16(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102740(param_2);
  uVar4 = FUN_001026e8(param_2);
                    /* try { // try from 00101e0e to 00101e12 has its CatchHandler @ 00101e4b */
  uVar1 = FUN_00102798(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f56(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101b7c(long *param_1)

{
  FUN_00101edc(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101ad0(param_1);
  return;
}




void FUN_00103cb6(void)

{
  return;
}




undefined8 FUN_0010261f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c11(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103222(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001033fa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00102a5d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f48(param_1,param_2,param_3);
  return;
}




void FUN_00101c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f8a(param_1);
  local_18 = FUN_00101fe1(&local_38,&local_20);
  local_20 = FUN_00102546(local_30);
  uVar1 = FUN_00102592(&local_20,local_18);
  FUN_00102026(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102546(local_30);
  FUN_00102592(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103061(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103268(param_1,param_2,param_3);
  return;
}




void FUN_00103853(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101f28(undefined8 param_1,undefined8 param_2)

{
  FUN_0010280f(param_1,param_2);
  return;
}




void FUN_001018ae(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b10(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(800);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101c16(local_58);
  FUN_00101c66(local_38,&local_60);
                    /* try { // try from 00101939 to 001019ce has its CatchHandler @ 00101a1a */
  FUN_00101c94(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c16(local_58);
  FUN_00101c66(local_38,&local_60);
  FUN_00101c94(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c16(local_58);
  FUN_00101c66(local_38,&local_60);
  FUN_00101c94(local_58,local_38[0],1,&local_68);
  FUN_00101d5a(local_38,local_58);
                    /* try { // try from 001019d6 to 001019da has its CatchHandler @ 00101a05 */
  FUN_001015ee(local_38);
  FUN_00101bce(local_38);
  FUN_00101bce(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001026e8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010283a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ce2(void)

{
  return;
}




void FUN_00103c5e(void)

{
  return;
}




undefined8 FUN_0010367a(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00101ab9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102ef8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001031b9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033ad(param_1);
  puVar1 = (undefined8 *)FUN_001033cb(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103903(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




undefined8 FUN_00102546(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f56(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c3e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010304e(param_1,param_2);
  return;
}




undefined8 FUN_00101a54(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103727("Calling good()...");
  FUN_00101a44();
  FUN_00103727("Finished good()");
  FUN_00103727("Calling bad()...");
  FUN_00101718();
  FUN_00103727("Finished bad()");
  return 0;
}




undefined8 FUN_00102c11(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c3e(param_1,param_2);
  return param_1;
}




void FUN_00101c66(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f78(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103ef3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101ecc(void)

{
  return;
}




void FUN_00103492(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103583(param_2);
  uVar2 = FUN_00103583(param_1);
  FUN_001035a9(uVar2,uVar1,param_3);
  return;
}




void FUN_00102dcd(undefined8 param_1,undefined8 param_2)

{
  FUN_001030d6(param_1,param_2);
  return;
}




void FUN_00103c95(void)

{
  return;
}




void FUN_00103cd7(void)

{
  return;
}




void FUN_00102cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103061(param_1,param_2,param_3);
  return;
}




void FUN_00102f0a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




undefined8 FUN_00103c09(void)

{
  return 0;
}




void FUN_0010368f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036c4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103e57(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102d2e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103f12(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103c69(void)

{
  return;
}




undefined8 FUN_00101c16(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f56(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103188(param_1,param_2,param_3);
  return;
}




void FUN_00103268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103412(param_2);
  uVar2 = FUN_00103412(param_1);
  FUN_00103424(uVar2,uVar1,param_3);
  return;
}




void FUN_00103ced(void)

{
  return;
}




void FUN_00101bce(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f16(param_1);
  FUN_00101f28(*param_1,param_1[1],uVar1);
  FUN_00101b7c(param_1);
  return;
}




void FUN_00102d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d7e(param_3);
  FUN_00103092(param_1,param_2,uVar1);
  return;
}




void FUN_00103583(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010367a(&local_10);
  FUN_00102e78(uVar1);
  return;
}




void FUN_0010374d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102d55(void)

{
  return;
}




void FUN_00103828(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101f78(undefined8 param_1)

{
  return param_1;
}




long FUN_001025f8(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00101ad0(undefined8 param_1)

{
  FUN_00101b5c(param_1);
  return;
}




undefined8 FUN_00103001(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030ea(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cc1(void)

{
  return;
}




void FUN_00101edc(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001027dd(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101b10(undefined8 param_1)

{
  FUN_00101af0(param_1);
  return;
}




void FUN_00102026(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_00102a92(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102546(local_80);
      local_60 = FUN_00102920(&local_88,&local_78);
      local_70 = FUN_00102b82(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f16(local_80);
                    /* try { // try from 00102330 to 001023bb has its CatchHandler @ 00102473 */
      FUN_00102a5d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f16(local_80);
      puVar2 = (undefined8 *)FUN_00101f78(&local_88);
      local_70 = FUN_00102bb9(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f16(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f78(&local_88);
      local_70 = FUN_00102bb9(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f16(local_80);
      FUN_00101f28(*local_80,local_80[1],uVar1);
      FUN_00101edc(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010286e(local_38,param_1,param_4);
                    /* try { // try from 001020b0 to 00102283 has its CatchHandler @ 00102455 */
      local_50 = FUN_00102902(local_38);
      local_78 = FUN_00101c16(local_80);
      local_48 = FUN_00102920(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f16(local_80);
        FUN_00102964(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101f78(&local_88);
        FUN_001029bc(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f78(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f78(&local_88);
        FUN_00102a0c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f16(local_80);
        lVar4 = FUN_00102a5d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f16(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f78(&local_88);
        FUN_00102964(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f78(&local_88);
        FUN_00102a0c(*puVar2,local_40,local_50);
      }
      FUN_001028ce(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c9e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b82(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103cab(void)

{
  return;
}




bool FUN_00103dfc(pthread_t *param_1)

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




void FUN_00102a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ef8(param_2);
  uVar2 = FUN_00102ef8(param_1);
  FUN_00102f0a(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102b82(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102fd3(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102c68(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c3e(param_1,param_2);
  FUN_00101e9a(param_1);
  return;
}




void FUN_001015ee(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_350;
  ulong local_348;
  undefined8 uStack_338;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_001016f4(param_1,2);
  __ptr = (void *)*puVar1;
  for (local_350 = 0; local_350 < 100; local_350 = local_350 + 1) {
    *(undefined4 *)(&uStack_338 + local_350) = 0;
    *(undefined4 *)((long)&uStack_338 + local_350 * 8 + 4) = 0;
  }
  for (local_348 = 0; local_348 < 100; local_348 = local_348 + 1) {
    *(undefined8 *)(local_348 * 8 + (long)__ptr) = (&uStack_338)[local_348];
  }
  FUN_00103984(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f16(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c8a(void)

{
  return;
}




void FUN_001037d3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001027dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d2e(param_1,param_2,param_3);
  return;
}




void FUN_00102798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cf8(param_1,param_2,param_3);
  return;
}




void FUN_00102902(undefined8 param_1)

{
  FUN_00102d68(param_1);
  return;
}




void FUN_0010354e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103617(param_1,param_2,param_3);
  return;
}




void FUN_0010286e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d7e(param_3);
  uVar2 = FUN_00102d68(param_1);
  FUN_00102d90(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00102740(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010283a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




int FUN_00103c18(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010285c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010304e(void)

{
  return;
}




undefined8 FUN_00102d7e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010280f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d55(param_1,param_2);
  return;
}




void FUN_00103c7f(void)

{
  return;
}




void FUN_00102964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102df7(param_2);
  uVar2 = FUN_00102df7(param_1);
  FUN_00102e43(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001030ea(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



