
void * FUN_00103716(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001038fb(undefined4 param_1)

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




undefined8 FUN_00103c5b(void)

{
  return 0;
}




void FUN_001038d0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103053(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010313c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b22(undefined8 param_1)

{
  FUN_00101bae(param_1);
  return;
}




ulong * FUN_0010341d(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010313c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101b42(undefined8 param_1)

{
  FUN_00101b82(param_1);
  return;
}




undefined8 FUN_0010273a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010288c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102820(void)

{
  return;
}




void FUN_001033b1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f4a(param_1);
  uVar1 = FUN_00103534(uVar1,param_2,param_3);
  FUN_001031c4(&local_10,uVar1);
  return;
}




long FUN_0010264a(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102954(undefined8 param_1)

{
  FUN_00102dba(param_1);
  return;
}




long FUN_0010333b(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_0010320b(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033ff(param_1);
  puVar1 = (undefined8 *)FUN_0010341d(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00103d81(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d4a,local_18);
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




undefined8 FUN_00101aa6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103779("Calling good()...");
  FUN_00101a96();
  FUN_00103779("Finished good()");
  FUN_00103779("Calling bad()...");
  FUN_0010173a();
  FUN_00103779("Finished bad()");
  return 0;
}




undefined8 FUN_00103464(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103ecc(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_001039d6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103ca5(void)

{
  return;
}




undefined8 FUN_00102f4a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a0e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eca(param_2);
  uVar2 = FUN_00102eca(param_1);
  FUN_00102edc(uVar2,uVar1,param_3);
  return;
}




void FUN_00103955(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101f7a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102861(param_1,param_2);
  return;
}




undefined8 FUN_00102e49(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010313c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00103e4e(pthread_t *param_1)

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




undefined8 FUN_00102dd0(undefined8 param_1)

{
  return param_1;
}




void FUN_001028c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102dd0(param_3);
  uVar2 = FUN_00102dba(param_1);
  FUN_00102de2(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103cfd(void)

{
  return;
}




void FUN_001032ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103464(param_2);
  uVar2 = FUN_00103464(param_1);
  FUN_00103476(uVar2,uVar1,param_3);
  return;
}




void FUN_00102aaf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f9a(param_1,param_2,param_3);
  return;
}




void FUN_00103cd1(void)

{
  return;
}




int FUN_00103c6a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_0010357f(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001028ae(&local_10);
  return *puVar1;
}




void FUN_0010384f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010387a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001039a8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103274(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010344c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_0010330a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034e4(param_1,param_2,param_3);
  return;
}




void FUN_0010288c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00101716(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_001036cc(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101cb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101fca(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103d3f(void)

{
  return;
}




void FUN_00102e1f(undefined8 param_1,undefined8 param_2)

{
  FUN_00103128(param_1,param_2);
  return;
}




long FUN_00102033(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001028ae(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001028ae(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103779(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001030e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102dd0(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101b0b(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103d1e(void)

{
  return;
}




void FUN_00103128(void)

{
  return;
}




void FUN_00102f5c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010315a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010330a(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103c4c(void)

{
  return 1;
}




void FUN_00101fa8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103c84(void)

{
  return;
}




void FUN_00102d4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030b3(param_1,param_2,param_3);
  return;
}




void FUN_001035a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103669(param_1,param_2,param_3);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_00101716(param_1,2);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00103779(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102de2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dd0(param_3);
  FUN_001030e4(param_1,param_2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_0010397d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001030a0(void)

{
  return;
}




void FUN_00103d13(void)

{
  return;
}




void FUN_001033ff(undefined8 param_1)

{
  FUN_0010344c(param_1);
  return;
}




void FUN_00102f9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031da(param_1,param_2,param_3);
  return;
}




void FUN_00101ce6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101fdc(param_1);
  local_18 = FUN_00102033(&local_38,&local_20);
  local_20 = FUN_00102598(local_30);
  uVar1 = FUN_001025e4(&local_20,local_18);
  FUN_00102078(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102598(local_30);
  FUN_001025e4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001025e4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101fa8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103476(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f4a(param_3);
  uVar2 = FUN_0010357f(local_28);
  uVar3 = FUN_0010357f(local_20);
  uVar1 = FUN_001035a0(uVar3,uVar2,uVar1);
  FUN_001031c4(&local_30,uVar1);
  return;
}




void FUN_00103a09(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001037d1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void * FUN_00103669(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103f64(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00101c68(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fa8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101f2e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010282f(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101b62(undefined8 param_1)

{
  FUN_00101b42(param_1);
  return;
}




void FUN_00103ce7(void)

{
  return;
}




undefined8 FUN_00102598(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fa8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001031c4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103d4a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001029b6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e49(param_2);
  uVar2 = FUN_00102e49(param_1);
  FUN_00102e95(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101c20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f68(param_1);
  FUN_00101f7a(*param_1,param_1[1],uVar1);
  FUN_00101bce(param_1);
  return;
}




void FUN_00103025(undefined8 param_1,undefined8 param_2)

{
  FUN_00103274(param_1,param_2,0);
  return;
}




void FUN_00103825(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f1e(void)

{
  return;
}




void FUN_0010160f(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_00101716(param_1,2);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00103779(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102671(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c63(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103c8f(void)

{
  return;
}




void FUN_00104020(void)

{
  return;
}




void FUN_001035d5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001036cc(&local_10);
  FUN_00102eca(uVar1);
  return;
}




void FUN_001018ea(void)

{
  long in_FS_OFFSET;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b62(local_58);
  local_70 = (void *)0x0;
                    /* try { // try from 0010191f to 00101a20 has its CatchHandler @ 00101a6c */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  local_68 = FUN_00101c68(local_58);
  FUN_00101cb8(local_38,&local_68);
  FUN_00101ce6(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101c68(local_58);
  FUN_00101cb8(local_38,&local_68);
  FUN_00101ce6(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101c68(local_58);
  FUN_00101cb8(local_38,&local_68);
  FUN_00101ce6(local_58,local_38[0],1,&local_70);
  FUN_00101dac(local_38,local_58);
                    /* try { // try from 00101a28 to 00101a2c has its CatchHandler @ 00101a57 */
  FUN_0010160f(local_38);
  FUN_00101c20(local_38);
  FUN_00101c20(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e95(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010315a(param_1,param_2,param_3);
  return;
}




void FUN_0010318f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010333b(param_1,param_2,param_3);
  return;
}




void FUN_001038a5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101fdc(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010288c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102bd4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103025(param_1,param_2);
  }
  return uVar1;
}




void FUN_0010173a(void)

{
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b62(local_58);
  local_70 = 0;
                    /* try { // try from 0010176f to 00101874 has its CatchHandler @ 001018c0 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  local_68 = FUN_00101c68(local_58);
  FUN_00101cb8(local_38,&local_68);
  FUN_00101ce6(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101c68(local_58);
  FUN_00101cb8(local_38,&local_68);
  FUN_00101ce6(local_58,local_38[0],1,&local_70);
  local_68 = FUN_00101c68(local_58);
  FUN_00101cb8(local_38,&local_68);
  FUN_00101ce6(local_58,local_38[0],1,&local_70);
  FUN_00101dac(local_38,local_58);
                    /* try { // try from 0010187c to 00101880 has its CatchHandler @ 001018ab */
  FUN_00101509(local_38);
  FUN_00101c20(local_38);
  FUN_00101c20(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f83(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00102ae4(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102fd0(param_1);
  lVar2 = FUN_0010264a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010264a(local_40);
  local_30 = FUN_0010264a(local_40);
  plVar3 = (long *)FUN_00102ff6(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010264a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102fd0(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102fd0(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101bce(long *param_1)

{
  FUN_00101f2e(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101b22(param_1);
  return;
}




void FUN_00101dac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026c2(param_2);
  FUN_00102671(&local_31,uVar1);
  uVar1 = FUN_0010264a(param_2);
                    /* try { // try from 00101e12 to 00101e16 has its CatchHandler @ 00101e7f */
  FUN_001026d4(param_1,uVar1,&local_31);
  FUN_00101bae(&local_31);
  uVar2 = FUN_00101f68(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102792(param_2);
  uVar4 = FUN_0010273a(param_2);
                    /* try { // try from 00101e60 to 00101e64 has its CatchHandler @ 00101e9d */
  uVar1 = FUN_001027ea(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010344c(void)

{
  return 0xfffffffffffffff;
}




long FUN_00102dba(long param_1)

{
  return param_1 + 8;
}




void FUN_00103cc6(void)

{
  return;
}




void FUN_00103d08(void)

{
  return;
}




void FUN_00102c90(undefined8 param_1,undefined8 param_2)

{
  FUN_001030a0(param_1,param_2);
  return;
}




undefined8 FUN_00102eca(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103a69(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001035fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f4a(param_3);
  uVar2 = FUN_00102f4a(local_28);
  uVar3 = FUN_00102f4a(local_20);
  uVar1 = FUN_001036e1(uVar3,uVar2,uVar1);
  FUN_001031c4(&local_30,uVar1);
  return;
}




undefined8 FUN_00103ea9(void *param_1)

{
  free(param_1);
  return 1;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00102cba(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c90(param_1,param_2);
  FUN_00101eec(param_1);
  return;
}




void FUN_00103c9a(void)

{
  return;
}




void FUN_00101bae(undefined8 param_1)

{
  FUN_00101f1e(param_1);
  return;
}




void FUN_00102edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f4a(param_3);
  uVar2 = FUN_00102f4a(local_28);
  uVar3 = FUN_00102f4a(local_20);
  uVar1 = FUN_0010318f(uVar3,uVar2,uVar1);
  FUN_001031c4(&local_30,uVar1);
  return;
}




void FUN_001031da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033b1(param_1,param_2,param_3);
  return;
}




void FUN_00101b82(undefined8 param_1)

{
  FUN_00101ecc(param_1);
  FUN_00101eec(param_1);
  return;
}




void FUN_00102da7(void)

{
  return;
}




undefined8 * FUN_00103534(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001036e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103716(param_1,param_2,param_3);
  return;
}




void FUN_00103d34(void)

{
  return;
}




void FUN_00102cf0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102bd4(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_001037f9(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101f68(undefined8 param_1)

{
  return param_1;
}




void FUN_00102078(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ae4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102598(local_80);
      local_60 = FUN_00102972(&local_88,&local_78);
      local_70 = FUN_00102bd4(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f68(local_80);
                    /* try { // try from 00102382 to 0010240d has its CatchHandler @ 001024c5 */
      FUN_00102aaf(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f68(local_80);
      puVar2 = (undefined8 *)FUN_00101fca(&local_88);
      local_70 = FUN_00102c0b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f68(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101fca(&local_88);
      local_70 = FUN_00102c0b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f68(local_80);
      FUN_00101f7a(*local_80,local_80[1],uVar1);
      FUN_00101f2e(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001028c0(local_38,param_1,param_4);
                    /* try { // try from 00102102 to 001022d5 has its CatchHandler @ 001024a7 */
      local_50 = FUN_00102954(local_38);
      local_78 = FUN_00101c68(local_80);
      local_48 = FUN_00102972(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f68(local_80);
        FUN_001029b6(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101fca(&local_88);
        FUN_00102a0e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101fca(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101fca(&local_88);
        FUN_00102a5e(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f68(local_80);
        lVar4 = FUN_00102aaf(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f68(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101fca(&local_88);
        FUN_001029b6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101fca(&local_88);
        FUN_00102a5e(*puVar2,local_40,local_50);
      }
      FUN_00102920(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a96(void)

{
  FUN_001018ea();
  return;
}




void FUN_00102fd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026c2(param_1);
  FUN_0010320b(uVar1);
  return;
}




void FUN_00103cf2(void)

{
  return;
}




void FUN_00101ecc(undefined8 param_1)

{
  FUN_00102820(param_1);
  return;
}




undefined8 FUN_00101b0b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101fca(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102c63(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c90(param_1,param_2);
  return param_1;
}




void FUN_00103cdc(void)

{
  return;
}




long FUN_00102972(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101fca(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101fca(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102a5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f4a(param_2);
  uVar2 = FUN_00102f4a(param_1);
  FUN_00102f5c(uVar2,uVar1,param_3);
  return;
}




void FUN_00102c0b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103053(param_2);
  uVar2 = FUN_00103053(param_1);
  FUN_00102e95(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




void FUN_00101eec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00103cbb(void)

{
  return;
}




void FUN_0010379f(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102792(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010288c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f45(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001026d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cba(param_1,param_3);
                    /* try { // try from 0010270e to 00102712 has its CatchHandler @ 00102715 */
  FUN_00102cf0(param_1,param_2);
  return;
}




undefined8 FUN_001028ae(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d29(void)

{
  return;
}




void FUN_001034e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035d5(param_2);
  uVar2 = FUN_001035d5(param_1);
  FUN_001035fb(uVar2,uVar1,param_3);
  return;
}




void FUN_00102861(undefined8 param_1,undefined8 param_2)

{
  FUN_00102da7(param_1,param_2);
  return;
}




undefined8 FUN_001026c2(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103b6d(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010282f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d80(param_1,param_2,param_3);
  return;
}




ulong * FUN_00102ff6(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102d80(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001027ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d4a(param_1,param_2,param_3);
  return;
}




void FUN_00103cb0(void)

{
  return;
}




void FUN_00102920(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dba(param_1);
  FUN_00102e1f(*param_1,uVar1);
  return;
}




void FUN_001030b3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ba(param_1,param_2,param_3);
  return;
}



