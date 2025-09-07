
undefined8 FUN_00103317(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102646(&local_10);
  return *puVar1;
}




long FUN_00103682(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




bool FUN_00103d7b(pthread_t *param_1)

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




void FUN_001037fd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001035c9(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00103682(param_1,2);
  __dest = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  memcpy(__dest,local_1a8,400);
  FUN_001036fe(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ce2(param_3);
  uVar2 = FUN_00102ce2(local_28);
  uVar3 = FUN_00102ce2(local_20);
  uVar1 = FUN_00102f27(uVar3,uVar2,uVar1);
  FUN_00102f5c(&local_30,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




undefined8 FUN_00102fa3(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103197(param_1);
  puVar1 = (undefined8 *)FUN_001031b5(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




ulong * FUN_00102d8e(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103bf3(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101470();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00101e10(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_0010287c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102330(local_80);
      local_60 = FUN_0010270a(&local_88,&local_78);
      local_70 = FUN_0010296c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d00(local_80);
                    /* try { // try from 0010211a to 001021a5 has its CatchHandler @ 0010225d */
      FUN_00102847(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d00(local_80);
      puVar2 = (undefined8 *)FUN_00101d62(&local_88);
      local_70 = FUN_001029a3(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d00(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d62(&local_88);
      local_70 = FUN_001029a3(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d00(local_80);
      FUN_00101d12(*local_80,local_80[1],uVar1);
      FUN_00101cc6(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102658(local_38,param_1,param_4);
                    /* try { // try from 00101e9a to 0010206d has its CatchHandler @ 0010223f */
      local_50 = FUN_001026ec(local_38);
      local_78 = FUN_00101a00(local_80);
      local_48 = FUN_0010270a(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d00(local_80);
        FUN_0010274e(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d62(&local_88);
        FUN_001027a6(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d62(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d62(&local_88);
        FUN_001027f6(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d00(local_80);
        lVar4 = FUN_00102847(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d00(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d62(&local_88);
        FUN_0010274e(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d62(&local_88);
        FUN_001027f6(*puVar2,local_40,local_50);
      }
      FUN_001026b8(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001023e2(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00102f5c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101d40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001025b8(void)

{
  return;
}




void FUN_00102f27(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d3(param_1,param_2,param_3);
  return;
}




void FUN_00102e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b68(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018a4(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103052(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031fc(param_2);
  uVar2 = FUN_001031fc(param_1);
  FUN_0010320e(uVar2,uVar1,param_3);
  return;
}




void FUN_00103726(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103903(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102b68(undefined8 param_1)

{
  return param_1;
}




void FUN_00102624(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001036a6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101a7e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101d74(param_1);
  local_18 = FUN_00101dcb(&local_38,&local_20);
  local_20 = FUN_00102330(local_30);
  uVar1 = FUN_0010237c(&local_20,local_18);
  FUN_00101e10(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102330(local_30);
  FUN_0010237c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ae2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e4b(param_1,param_2,param_3);
  return;
}




void FUN_00102a28(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e38(param_1,param_2);
  return;
}




undefined8 FUN_0010252a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102624(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bbc(void)

{
  return;
}




void FUN_00102ed4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c40(void)

{
  return;
}




undefined8 FUN_00103df9(undefined8 *param_1)

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




void FUN_00102658(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b68(param_3);
  uVar2 = FUN_00102b52(param_1);
  FUN_00102b7a(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00103b79(void)

{
  return 1;
}




void FUN_00103828(undefined4 param_1)

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




void FUN_00103197(undefined8 param_1)

{
  FUN_001031e4(param_1);
  return;
}




void FUN_00103479(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034ae(param_1,param_2,param_3);
  return;
}




void FUN_00103e72(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void * FUN_001034ae(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c14(void)

{
  return;
}




void FUN_001036fe(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102ec0(void)

{
  return;
}




void FUN_00102ef2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030a2(param_1,param_2,param_3);
  return;
}




void FUN_0010246c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a52(param_1,param_3);
                    /* try { // try from 001024a6 to 001024aa has its CatchHandler @ 001024ad */
  FUN_00102a88(param_1,param_2);
  return;
}




void FUN_0010327c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010336d(param_2);
  uVar2 = FUN_0010336d(param_1);
  FUN_00103393(uVar2,uVar1,param_3);
  return;
}




void FUN_001018da(undefined8 param_1)

{
  FUN_0010191a(param_1);
  return;
}




void FUN_00102a88(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010296c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00101cb6(void)

{
  return;
}




void FUN_00103338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103401(param_1,param_2,param_3);
  return;
}




void FUN_00103be8(void)

{
  return;
}




void FUN_00102d32(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f72(param_1,param_2,param_3);
  return;
}




void FUN_00102d68(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010245a(param_1);
  FUN_00102fa3(uVar1);
  return;
}




void FUN_00102b7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b68(param_3);
  FUN_00102e7c(param_1,param_2,uVar1);
  return;
}




void FUN_00102dbd(undefined8 param_1,undefined8 param_2)

{
  FUN_0010300c(param_1,param_2,0);
  return;
}




void FUN_00103c77(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001037d2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010245a(param_2);
  FUN_00102409(&local_31,uVar1);
  uVar1 = FUN_001023e2(param_2);
                    /* try { // try from 00101baa to 00101bae has its CatchHandler @ 00101c17 */
  FUN_0010246c(param_1,uVar1,&local_31);
  FUN_00101946(&local_31);
  uVar2 = FUN_00101d00(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010252a(param_2);
  uVar4 = FUN_001024d2(param_2);
                    /* try { // try from 00101bf8 to 00101bfc has its CatchHandler @ 00101c35 */
  uVar1 = FUN_00102582(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103882(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




ulong FUN_0010287c(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d68(param_1);
  lVar2 = FUN_001023e2(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023e2(local_40);
  local_30 = FUN_001023e2(local_40);
  plVar3 = (long *)FUN_00102d8e(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023e2(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d68(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d68(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_001031b5(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102a52(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a28(param_1,param_2);
  FUN_00101c84(param_1);
  return;
}




void FUN_001036cc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102ce2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c4b(void)

{
  return;
}




void FUN_00102f72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103149(param_1,param_2,param_3);
  return;
}




void FUN_00102bb7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ec0(param_1,param_2);
  return;
}




void FUN_001018fa(undefined8 param_1)

{
  FUN_001018da(param_1);
  return;
}




void FUN_00103e91(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d12(undefined8 param_1,undefined8 param_2)

{
  FUN_001025f9(param_1,param_2);
  return;
}




void FUN_001030a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010327c(param_1,param_2,param_3);
  return;
}




void FUN_00103752(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103393(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ce2(param_3);
  uVar2 = FUN_00102ce2(local_28);
  uVar3 = FUN_00102ce2(local_20);
  uVar1 = FUN_00103479(uVar3,uVar2,uVar1);
  FUN_00102f5c(&local_30,uVar1);
  return;
}




void FUN_0010320e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ce2(param_3);
  uVar2 = FUN_00103317(local_28);
  uVar3 = FUN_00103317(local_20);
  uVar1 = FUN_00103338(uVar3,uVar2,uVar1);
  FUN_00102f5c(&local_30,uVar1);
  return;
}




void FUN_00103c35(void)

{
  return;
}




void FUN_001018ba(undefined8 param_1)

{
  FUN_00101946(param_1);
  return;
}




undefined8 FUN_00101a00(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d40(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101529(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018fa(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010155e to 00101636 has its CatchHandler @ 00101682 */
  local_68 = operator_new__(200);
  local_60 = FUN_00101a00(local_58);
  FUN_00101a50(local_38,&local_60);
  FUN_00101a7e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a00(local_58);
  FUN_00101a50(local_38,&local_60);
  FUN_00101a7e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a00(local_58);
  FUN_00101a50(local_38,&local_60);
  FUN_00101a7e(local_58,local_38[0],1,&local_68);
  FUN_00101b44(local_38,local_58);
                    /* try { // try from 0010163e to 00101642 has its CatchHandler @ 0010166d */
  FUN_00103511(local_38);
  FUN_001019b8(local_38);
  FUN_001019b8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




int FUN_00103b97(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101d00(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e38(void)

{
  return;
}




void FUN_001025f9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b3f(param_1,param_2);
  return;
}




undefined8 FUN_001018a4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102c62(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c56(void)

{
  return;
}




undefined8 FUN_00103464(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001019b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d00(param_1);
  FUN_00101d12(*param_1,param_1[1],uVar1);
  FUN_00101966(param_1);
  return;
}




undefined8 FUN_00101d62(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bd2(void)

{
  return;
}




void FUN_00103f50(void)

{
  return;
}




void FUN_001038aa(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103eb0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001031e4(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102b18(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102deb(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ed4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103511(undefined8 param_1)

{
  undefined4 *__dest;
  undefined8 *puVar1;
  long lVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined8 local_1a8 [51];
  long local_10;
  
  bVar3 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00103682(param_1,2);
  __dest = (undefined4 *)*puVar1;
  puVar1 = local_1a8;
  for (lVar2 = 0x32; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + (ulong)bVar3 * -2 + 1;
  }
  memcpy(__dest,local_1a8,400);
  FUN_001036fe(*__dest);
  if (__dest != (undefined4 *)0x0) {
    operator_delete__(__dest);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c84(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001026ec(undefined8 param_1)

{
  FUN_00102b52(param_1);
  return;
}




void FUN_00103c61(void)

{
  return;
}




undefined8 FUN_00103cae(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c77,local_18);
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




void FUN_00103ee0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001026b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b52(param_1);
  FUN_00102bb7(*param_1,uVar1);
  return;
}




undefined8 FUN_0010183f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036a6("Calling good()...");
  FUN_0010182f();
  FUN_001036a6("Finished good()");
  FUN_001036a6("Calling bad()...");
  FUN_00101529();
  FUN_001036a6("Finished bad()");
  return 0;
}




void FUN_00103c1f(void)

{
  return;
}




void FUN_0010191a(undefined8 param_1)

{
  FUN_00101c64(param_1);
  FUN_00101c84(param_1);
  return;
}




void FUN_0010300c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031e4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_001029fb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a28(param_1,param_2);
  return param_1;
}




ulong FUN_00103a9a(long param_1,ulong param_2,long param_3)

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




void FUN_00103bc7(void)

{
  return;
}




void FUN_001027a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c62(param_2);
  uVar2 = FUN_00102c62(param_1);
  FUN_00102c74(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b3f(void)

{
  return;
}




void FUN_0010377c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001031fc(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c09(void)

{
  return;
}




void FUN_001027f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ce2(param_2);
  uVar2 = FUN_00102ce2(param_1);
  FUN_00102cf4(uVar2,uVar1,param_3);
  return;
}




void FUN_00103c2a(void)

{
  return;
}




void FUN_001038d5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010182f(void)

{
  FUN_001016ac();
  return;
}




long FUN_00102b52(long param_1)

{
  return param_1 + 8;
}




void FUN_00102e4b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103052(param_1,param_2,param_3);
  return;
}




void FUN_00103bdd(void)

{
  return;
}




void FUN_001016ac(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018fa(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001016e1 to 001017b9 has its CatchHandler @ 00101805 */
  local_68 = operator_new__(400);
  local_60 = FUN_00101a00(local_58);
  FUN_00101a50(local_38,&local_60);
  FUN_00101a7e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a00(local_58);
  FUN_00101a50(local_38,&local_60);
  FUN_00101a7e(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a00(local_58);
  FUN_00101a50(local_38,&local_60);
  FUN_00101a7e(local_58,local_38[0],1,&local_68);
  FUN_00101b44(local_38,local_58);
                    /* try { // try from 001017c1 to 001017c5 has its CatchHandler @ 001017f0 */
  FUN_001035c9(local_38);
  FUN_001019b8(local_38);
  FUN_001019b8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001029a3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102deb(param_2);
  uVar2 = FUN_00102deb(param_1);
  FUN_00102c2d(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103149(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ce2(param_1);
  uVar1 = FUN_001032cc(uVar1,param_2,param_3);
  FUN_00102f5c(&local_10,uVar1);
  return;
}




undefined8 * FUN_001032cc(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00102847(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d32(param_1,param_2,param_3);
  return;
}




void * FUN_00103401(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101a50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d62(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00101cc6(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025c7(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00102be1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ed4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed0)();
  return;
}




void FUN_00103bb1(void)

{
  return;
}




void FUN_00101946(undefined8 param_1)

{
  FUN_00101cb6(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00101c64(undefined8 param_1)

{
  FUN_001025b8(param_1);
  return;
}




void FUN_0010274e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102be1(param_2);
  uVar2 = FUN_00102be1(param_1);
  FUN_00102c2d(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103b88(void)

{
  return 0;
}




void FUN_00103bfe(void)

{
  return;
}




void FUN_001025c7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b18(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102646(undefined8 param_1)

{
  return param_1;
}




long FUN_0010270a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d62(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d62(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101966(long *param_1)

{
  FUN_00101cc6(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001018ba(param_1);
  return;
}




ulong FUN_00103996(long param_1,ulong param_2,long param_3)

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




void FUN_0010336d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103464(&local_10);
  FUN_00102c62(uVar1);
  return;
}




undefined8 FUN_00102330(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d40(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103dd6(void *param_1)

{
  free(param_1);
  return 1;
}




long FUN_00101dcb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102646(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102646(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_001024d2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102624(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001030d3(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_0010245a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d74(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102624(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001037a7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102409(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029fb(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102c2d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ef2(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010296c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102dbd(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_0010237c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d40(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103936(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103c6c(void)

{
  return;
}




void FUN_00102582(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ae2(param_1,param_2,param_3);
  return;
}




void FUN_00102cf4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}



