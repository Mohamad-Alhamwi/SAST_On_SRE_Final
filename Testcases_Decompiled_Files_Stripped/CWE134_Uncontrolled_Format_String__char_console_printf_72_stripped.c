
void FUN_00102d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010322b(param_2);
  uVar2 = FUN_0010322b(param_1);
  FUN_00103277(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001030d2(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102fb6(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00103961(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102c90(&local_10);
  return *puVar1;
}




void FUN_0010412c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103277(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010353c(param_1,param_2,param_3);
  return;
}




void FUN_0010309c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103072(param_1,param_2);
  FUN_001022ce(param_1);
  return;
}




void FUN_0010218e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102aa4(param_2);
  FUN_00102a53(&local_31,uVar1);
  uVar1 = FUN_00102a2c(param_2);
                    /* try { // try from 001021f4 to 001021f8 has its CatchHandler @ 00102261 */
  FUN_00102ab6(param_1,uVar1,&local_31);
  FUN_00101f90(&local_31);
  uVar2 = FUN_0010234a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102b74(param_2);
  uVar4 = FUN_00102b1c(param_2);
                    /* try { // try from 00102242 to 00102246 has its CatchHandler @ 0010227f */
  uVar1 = FUN_00102bcc(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ab6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010309c(param_1,param_3);
                    /* try { // try from 00102af0 to 00102af4 has its CatchHandler @ 00102af7 */
  FUN_001030d2(param_1,param_2);
  return;
}




undefined8 FUN_0010234a(undefined8 param_1)

{
  return param_1;
}




void FUN_001035bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103793(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102a53(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103045(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




long FUN_00102a2c(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00104346(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int FUN_0010404c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




long FUN_00102415(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102c90(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102c90(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103cdd(undefined4 param_1)

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




undefined8 FUN_00102b74(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102c6e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001042ae(undefined8 *param_1)

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




long FUN_0010319c(long param_1)

{
  return param_1 + 8;
}




void FUN_0010337c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035bc(param_1,param_2,param_3);
  return;
}




void FUN_00101f90(undefined8 param_1)

{
  FUN_00102300(param_1);
  return;
}




void FUN_0010312c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103495(param_1,param_2,param_3);
  return;
}




void FUN_00101f04(undefined8 param_1)

{
  FUN_00101f90(param_1);
  return;
}




void FUN_001040d4(void)

{
  return;
}




void FUN_00101e74(void)

{
  FUN_001018f9();
  FUN_00101b57();
  return;
}




void FUN_0010350a(void)

{
  return;
}




void FUN_00104066(void)

{
  return;
}




undefined8 FUN_0010297a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010238a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037e1(undefined8 param_1)

{
  FUN_0010382e(param_1);
  return;
}




void FUN_0010410b(void)

{
  return;
}




void FUN_001039b7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103aae(&local_10);
  FUN_001032ac(uVar1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




undefined8 FUN_00103435(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010351e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040f5(void)

{
  return;
}




undefined8 FUN_001032ac(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c43(undefined8 param_1,undefined8 param_2)

{
  FUN_00103189(param_1,param_2);
  return;
}




void FUN_00102fed(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103435(param_2);
  uVar2 = FUN_00103435(param_1);
  FUN_00103277(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001039dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010332c(param_3);
  uVar2 = FUN_0010332c(local_28);
  uVar3 = FUN_0010332c(local_20);
  uVar1 = FUN_00103ac3(uVar3,uVar2,uVar1);
  FUN_001035a6(&local_30,uVar1);
  return;
}




undefined8 FUN_00103045(undefined8 param_1,undefined8 param_2)

{
  FUN_00103072(param_1,param_2);
  return param_1;
}




void FUN_0010369c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103846(param_2);
  uVar2 = FUN_00103846(param_1);
  FUN_00103858(uVar2,uVar1,param_3);
  return;
}




void FUN_00103189(void)

{
  return;
}




void FUN_0010245a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ec6(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010297a(local_80);
      local_60 = FUN_00102d54(&local_88,&local_78);
      local_70 = FUN_00102fb6(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_0010234a(local_80);
                    /* try { // try from 00102764 to 001027ef has its CatchHandler @ 001028a7 */
      FUN_00102e91(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_0010234a(local_80);
      puVar2 = (undefined8 *)FUN_001023ac(&local_88);
      local_70 = FUN_00102fed(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_0010234a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001023ac(&local_88);
      local_70 = FUN_00102fed(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_0010234a(local_80);
      FUN_0010235c(*local_80,local_80[1],uVar1);
      FUN_00102310(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102ca2(local_38,param_1,param_4);
                    /* try { // try from 001024e4 to 001026b7 has its CatchHandler @ 00102889 */
      local_50 = FUN_00102d36(local_38);
      local_78 = FUN_0010204a(local_80);
      local_48 = FUN_00102d54(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_0010234a(local_80);
        FUN_00102d98(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_001023ac(&local_88);
        FUN_00102df0(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001023ac(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001023ac(&local_88);
        FUN_00102e40(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_0010234a(local_80);
        lVar4 = FUN_00102e91(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_0010234a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001023ac(&local_88);
        FUN_00102d98(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_001023ac(&local_88);
        FUN_00102e40(*puVar2,local_40,local_50);
      }
      FUN_00102d02(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001029c6(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_0010238a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d36(undefined8 param_1)

{
  FUN_0010319c(param_1);
  return;
}




void FUN_00103deb(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101eee(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032ac(param_2);
  uVar2 = FUN_001032ac(param_1);
  FUN_001032be(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001035a6(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102300(void)

{
  return;
}




void FUN_00103cb2(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104365(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102310(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102c11(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101fb0(long *param_1)

{
  FUN_00102310(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101f04(param_1);
  return;
}




void FUN_00103bb3(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010235c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c43(param_1,param_2);
  return;
}




void FUN_001038c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001039b7(param_2);
  uVar2 = FUN_001039b7(param_1);
  FUN_001039dd(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_0010322b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010351e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001032be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010332c(param_3);
  uVar2 = FUN_0010332c(local_28);
  uVar3 = FUN_0010332c(local_20);
  uVar1 = FUN_00103571(uVar3,uVar2,uVar1);
  FUN_001035a6(&local_30,uVar1);
  return;
}




void FUN_00104100(void)

{
  return;
}




long FUN_001015b8(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102c6e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103b5b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104116(void)

{
  return;
}




undefined8 FUN_00101e89(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b5b("Calling good()...");
  FUN_00101e74();
  FUN_00103b5b("Finished good()");
  FUN_00103b5b("Calling bad()...");
  FUN_001015dc();
  FUN_00103b5b("Finished bad()");
  return 0;
}




void FUN_00103162(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001040ea(void)

{
  return;
}




void FUN_001022ae(undefined8 param_1)

{
  FUN_00102c02(param_1);
  return;
}




ulong FUN_00103e4b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong * FUN_001037ff(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00104092(void)

{
  return;
}




undefined8 FUN_00102aa4(undefined8 param_1)

{
  return param_1;
}




void FUN_00102002(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010234a(param_1);
  FUN_0010235c(*param_1,param_1[1],uVar1);
  FUN_00101fb0(param_1);
  return;
}




void * FUN_00103a4b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00102bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010312c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001031b2(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e91(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010337c(param_1,param_2,param_3);
  return;
}




void FUN_00102d02(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010319c(param_1);
  FUN_00103201(*param_1,uVar1);
  return;
}




void FUN_00103793(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010332c(param_1);
  uVar1 = FUN_00103916(uVar1,param_2,param_3);
  FUN_001035a6(&local_10,uVar1);
  return;
}




void FUN_00104327(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103495(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010369c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001023ac(undefined8 param_1)

{
  return param_1;
}




void FUN_001020c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001023be(param_1);
  local_18 = FUN_00102415(&local_38,&local_20);
  local_20 = FUN_0010297a(local_30);
  uVar1 = FUN_001029c6(&local_20,local_18);
  FUN_0010245a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010297a(local_30);
  FUN_001029c6(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010382e(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00102fb6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103407(param_1,param_2);
  }
  return uVar1;
}




void FUN_00104087(void)

{
  return;
}




void * FUN_00103af8(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010353c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036ec(param_1,param_2,param_3);
  return;
}




void FUN_00103c5c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_0010332c(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103aae(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102c90(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f24(undefined8 param_1)

{
  FUN_00101f64(param_1);
  return;
}




void FUN_0010238a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103072(undefined8 param_1,undefined8 param_2)

{
  FUN_00103482(param_1,param_2);
  return;
}




ulong FUN_00103f4f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050c0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103db8(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined8 FUN_00103846(undefined8 param_1)

{
  return param_1;
}




void FUN_00104390(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 * FUN_00103916(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103ac3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103af8(param_1,param_2,param_3);
  return;
}




bool FUN_00104230(pthread_t *param_1)

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




void FUN_001040be(void)

{
  return;
}




void FUN_001036ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038c6(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b1c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102c6e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040df(void)

{
  return;
}




void FUN_00101b57(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f44(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e0 = local_88;
  local_d0 = strlen(local_e0);
  if (1 < 100 - local_d0) {
                    /* try { // try from 00101c53 to 00101dec has its CatchHandler @ 00101e44 */
    pcVar1 = fgets(local_e0 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00103b5b("fgets() failed");
      local_e0[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_e0);
      if ((local_d0 != 0) && (local_e0[local_d0 - 1] == '\n')) {
        local_e0[local_d0 - 1] = '\0';
      }
    }
  }
  local_d8 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d8);
  FUN_001020c8(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d8);
  FUN_001020c8(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d8);
  FUN_001020c8(local_c8,local_a8[0],1,&local_e0);
  FUN_0010218e(local_a8,local_c8);
                    /* try { // try from 00101df7 to 00101dfb has its CatchHandler @ 00101e2c */
  FUN_00101581(local_a8);
  FUN_00102002(local_a8);
  FUN_00102002(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103407(undefined8 param_1,undefined8 param_2)

{
  FUN_00103656(param_1,param_2,0);
  return;
}




void FUN_00103bdb(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104071(void)

{
  return;
}




void FUN_0010351e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015b8(param_1,2);
  printf((char *)*puVar1);
  return;
}




void FUN_00101f44(undefined8 param_1)

{
  FUN_00101f24(param_1);
  return;
}




void FUN_00104121(void)

{
  return;
}




void FUN_00103d8a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001040a8(void)

{
  return;
}




void FUN_001031c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001031b2(param_3);
  FUN_001034c6(param_1,param_2,uVar1);
  return;
}




void FUN_00102ca2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001031b2(param_3);
  uVar2 = FUN_0010319c(param_1);
  FUN_001031c4(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103656(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010382e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00104163(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010412c,local_18);
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




void FUN_00101545(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015b8(param_1,2);
  printf((char *)*puVar1);
  return;
}




long FUN_0010371d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_0010333e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103571(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010371d(param_1,param_2,param_3);
  return;
}




void FUN_00101f64(undefined8 param_1)

{
  FUN_001022ae(param_1);
  FUN_001022ce(param_1);
  return;
}




undefined8 FUN_001023be(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102c6e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001018f9(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
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
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f44(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d0);
                    /* try { // try from 00101a0a to 00101acf has its CatchHandler @ 00101b27 */
  FUN_001020c8(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d0);
  FUN_001020c8(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d0);
  FUN_001020c8(local_c8,local_a8[0],1,&local_d8);
  FUN_0010218e(local_a8,local_c8);
                    /* try { // try from 00101ada to 00101ade has its CatchHandler @ 00101b0f */
  FUN_00101545(local_a8);
  FUN_00102002(local_a8);
  FUN_00102002(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c11(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103162(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010402e(void)

{
  return 1;
}




void FUN_0010409d(void)

{
  return;
}




long FUN_00102d54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001023ac(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001023ac(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001040c9(void)

{
  return;
}




void FUN_00101581(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015b8(param_1,2);
  puts((char *)*puVar1);
  return;
}




undefined8 FUN_0010428b(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_00102ec6(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001033b2(param_1);
  lVar2 = FUN_00102a2c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102a2c(local_40);
  local_30 = FUN_00102a2c(local_40);
  plVar3 = (long *)FUN_001033d8(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102a2c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001033b2(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001033b2(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010204a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010238a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001034c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001031b2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101eee(8,param_2);
  *puVar2 = uVar1;
  return;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108028 = 1;
    return;
  }
  return;
}




undefined8 FUN_0010403d(void)

{
  return 0;
}




void FUN_00103c87(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103b81(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104400(void)

{
  return;
}




void FUN_00103482(void)

{
  return;
}




void FUN_00103c31(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001035ed(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001037e1(param_1);
  puVar1 = (undefined8 *)FUN_001037ff(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




ulong * FUN_001033d8(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102e40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010332c(param_2);
  uVar2 = FUN_0010332c(param_1);
  FUN_0010333e(uVar2,uVar1,param_3);
  return;
}




void FUN_00103982(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a4b(param_1,param_2,param_3);
  return;
}




void FUN_0010407c(void)

{
  return;
}




void FUN_00103c07(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103d5f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102c02(void)

{
  return;
}




void FUN_001040b3(void)

{
  return;
}




void FUN_00103d37(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103201(undefined8 param_1,undefined8 param_2)

{
  FUN_0010350a(param_1,param_2);
  return;
}




void FUN_0010209a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001023ac(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001033b2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102aa4(param_1);
  FUN_001035ed(uVar1);
  return;
}




void FUN_001015dc(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e0;
  undefined8 local_d8;
  size_t local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f44(local_c8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_e0 = local_88;
  local_d0 = strlen(local_e0);
  if (1 < 100 - local_d0) {
                    /* try { // try from 001016d8 to 00101871 has its CatchHandler @ 001018c9 */
    pcVar1 = fgets(local_e0 + local_d0,100 - (int)local_d0,stdin);
    if (pcVar1 == (char *)0x0) {
      FUN_00103b5b("fgets() failed");
      local_e0[local_d0] = '\0';
    }
    else {
      local_d0 = strlen(local_e0);
      if ((local_d0 != 0) && (local_e0[local_d0 - 1] == '\n')) {
        local_e0[local_d0 - 1] = '\0';
      }
    }
  }
  local_d8 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d8);
  FUN_001020c8(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d8);
  FUN_001020c8(local_c8,local_a8[0],1,&local_e0);
  local_d8 = FUN_0010204a(local_c8);
  FUN_0010209a(local_a8,&local_d8);
  FUN_001020c8(local_c8,local_a8[0],1,&local_e0);
  FUN_0010218e(local_a8,local_c8);
                    /* try { // try from 0010187c to 00101880 has its CatchHandler @ 001018b1 */
  FUN_00101509(local_a8);
  FUN_00102002(local_a8);
  FUN_00102002(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010332c(param_3);
  uVar2 = FUN_00103961(local_28);
  uVar3 = FUN_00103961(local_20);
  uVar1 = FUN_00103982(uVar3,uVar2,uVar1);
  FUN_001035a6(&local_30,uVar1);
  return;
}




void FUN_001022ce(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



