
void FUN_00103b6b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104052(param_1,param_2,param_3);
  return;
}




void FUN_00103e63(void)

{
  return;
}




void FUN_001046ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104006(param_3);
  uVar2 = FUN_00104006(local_28);
  uVar3 = FUN_00104006(local_20);
  uVar1 = FUN_00104793(uVar3,uVar2,uVar1);
  FUN_0010427a(&local_30,uVar1);
  return;
}




undefined8 FUN_00104006(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e3c(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102fda(void)

{
  return;
}




void FUN_001038a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103e06(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104f5b(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103086(undefined8 param_1)

{
  return param_1;
}




void FUN_00104370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010451a(param_2);
  uVar2 = FUN_0010451a(param_1);
  FUN_0010452c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001037f6(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103948(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103d76(param_1,param_3);
                    /* try { // try from 001037ca to 001037ce has its CatchHandler @ 001037d1 */
  FUN_00103dac(param_1,param_2);
  return;
}




void FUN_00104d4c(void)

{
  return;
}




undefined8 FUN_001036a0(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00103064(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104a5a(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001038eb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103e3c(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102530();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00103edb(undefined8 param_1,undefined8 param_2)

{
  FUN_001041de(param_1,param_2);
  return;
}




void FUN_001040dd(undefined8 param_1,undefined8 param_2)

{
  FUN_0010432a(param_1,param_2,0);
  return;
}




undefined8 FUN_00102d24(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103064(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00103e76(long param_1)

{
  return param_1 + 8;
}




void FUN_00102c3e(undefined8 param_1)

{
  FUN_00102f88(param_1);
  FUN_00102fa8(param_1);
  return;
}




bool FUN_00104f00(pthread_t *param_1)

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




void FUN_00102bde(undefined8 param_1)

{
  FUN_00102c6a(param_1);
  return;
}




void FUN_00104245(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001043f1(param_1,param_2,param_3);
  return;
}




void FUN_00104d57(void)

{
  return;
}




undefined8 FUN_0010372d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103d1f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010451a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010477e(undefined8 *param_1)

{
  return *param_1;
}




void FUN_0010419c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00103e8c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00102bc7(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00104018(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010397c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103e8c(param_3);
  uVar2 = FUN_00103e76(param_1);
  FUN_00103e9e(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103d76(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d4c(param_1,param_2);
  FUN_00102fa8(param_1);
  return;
}




void FUN_00104793(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047c8(param_1,param_2,param_3);
  return;
}




void FUN_00103dac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00103c90(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00104467(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104006(param_1);
  uVar1 = FUN_001045ea(uVar1,param_2,param_3);
  FUN_0010427a(&local_10,uVar1);
  return;
}




void FUN_00103e9e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103e8c(param_3);
  FUN_0010419c(param_1,param_2,uVar1);
  return;
}




long FUN_00103706(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




undefined8 FUN_0010377e(undefined8 param_1)

{
  return param_1;
}




void FUN_00103aca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103f86(param_2);
  uVar2 = FUN_00103f86(param_1);
  FUN_00103f98(uVar2,uVar1,param_3);
  return;
}




void FUN_00104de6(void)

{
  return;
}




undefined8 FUN_00104cfe(void)

{
  return 1;
}




void FUN_00102c1e(undefined8 param_1)

{
  FUN_00102bfe(param_1);
  return;
}




ulong FUN_00103ba0(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00104088(param_1);
  lVar2 = FUN_00103706(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103706(local_40);
  local_30 = FUN_00103706(local_40);
  plVar3 = (long *)FUN_001040ae(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103706(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00104088(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00104088(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010432a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104502(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00103036(undefined8 param_1,undefined8 param_2)

{
  FUN_0010391d(param_1,param_2);
  return;
}




void FUN_00104a2f(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103064(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102d74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103086(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00104901(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103098(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103948(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104652(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010471b(param_1,param_2,param_3);
  return;
}




void FUN_00103f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104006(param_3);
  uVar2 = FUN_00104006(local_28);
  uVar3 = FUN_00104006(local_20);
  uVar1 = FUN_00104245(uVar3,uVar2,uVar1);
  FUN_0010427a(&local_30,uVar1);
  return;
}




void FUN_00104052(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104290(param_1,param_2,param_3);
  return;
}




void FUN_001029d7(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c1e(local_58);
  local_64 = 0x14;
  local_60 = FUN_00102d24(local_58);
  FUN_00102d74(local_38,&local_60);
                    /* try { // try from 00102a47 to 00102adc has its CatchHandler @ 00102b28 */
  FUN_00102da2(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102d24(local_58);
  FUN_00102d74(local_38,&local_60);
  FUN_00102da2(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00102d24(local_58);
  FUN_00102d74(local_38,&local_60);
  FUN_00102da2(local_58,local_38[0],1,&local_64);
  FUN_00102e68(local_38,local_58);
                    /* try { // try from 00102ae4 to 00102ae8 has its CatchHandler @ 00102b13 */
  FUN_00102684(local_38);
  FUN_00102cdc(local_38);
  FUN_00102cdc(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103e76(param_1);
  FUN_00103edb(*param_1,uVar1);
  return;
}




void FUN_001048ab(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102bfe(undefined8 param_1)

{
  FUN_00102c3e(param_1);
  return;
}




undefined8 FUN_00103e8c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fea(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001038eb(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00104d0d(void)

{
  return 0;
}




void FUN_0010452c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00104006(param_3);
  uVar2 = FUN_00104631(local_28);
  uVar3 = FUN_00104631(local_20);
  uVar1 = FUN_00104652(uVar3,uVar2,uVar1);
  FUN_0010427a(&local_30,uVar1);
  return;
}




void FUN_00104d83(void)

{
  return;
}




undefined8 FUN_0010384e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103948(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102da2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00103098(param_1);
  local_18 = FUN_001030ef(&local_38,&local_20);
  local_20 = FUN_00103654(local_30);
  uVar1 = FUN_001036a0(&local_20,local_18);
  FUN_00103134(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103654(local_30);
  FUN_001036a0(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_001047c8(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_0010391d(undefined8 param_1,undefined8 param_2)

{
  FUN_00103e63(param_1,param_2);
  return;
}




undefined8 FUN_00103f05(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001041f2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cc7(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010410b(param_2);
  uVar2 = FUN_0010410b(param_1);
  FUN_00103f51(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103a72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103f05(param_2);
  uVar2 = FUN_00103f05(param_1);
  FUN_00103f51(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00104502(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00104dd0(void)

{
  return;
}




void FUN_001041f2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103134(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00103ba0(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103654(local_80);
      local_60 = FUN_00103a2e(&local_88,&local_78);
      local_70 = FUN_00103c90(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00103024(local_80);
                    /* try { // try from 0010343e to 001034c9 has its CatchHandler @ 00103581 */
      FUN_00103b6b(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00103024(local_80);
      puVar2 = (undefined8 *)FUN_00103086(&local_88);
      local_70 = FUN_00103cc7(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00103024(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00103086(&local_88);
      local_70 = FUN_00103cc7(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00103024(local_80);
      FUN_00103036(*local_80,local_80[1],uVar1);
      FUN_00102fea(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_0010397c(local_38,param_1,param_4);
                    /* try { // try from 001031be to 00103391 has its CatchHandler @ 00103563 */
      local_50 = FUN_00103a10(local_38);
      local_78 = FUN_00102d24(local_80);
      local_48 = FUN_00103a2e(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00103024(local_80);
        FUN_00103a72(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00103086(&local_88);
        FUN_00103aca(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00103086(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00103086(&local_88);
        FUN_00103b1a(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00103024(local_80);
        lVar4 = FUN_00103b6b(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00103024(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00103086(&local_88);
        FUN_00103a72(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00103086(&local_88);
        FUN_00103b1a(*puVar2,local_40,local_50);
      }
      FUN_001039dc(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fa8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010459a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104687(param_2);
  uVar2 = FUN_00104687(param_1);
  FUN_001046ad(uVar2,uVar1,param_3);
  return;
}




void FUN_00103d4c(undefined8 param_1,undefined8 param_2)

{
  FUN_00104158(param_1,param_2);
  return;
}




void FUN_00104d78(void)

{
  return;
}




void FUN_001050d0(void)

{
  return;
}




undefined8 FUN_00104e33(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104dfc,local_18);
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




void FUN_00104883(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00104290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104467(param_1,param_2,param_3);
  return;
}




void FUN_001049ad(undefined4 param_1)

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




void FUN_00104088(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010377e(param_1);
  FUN_001042c1(uVar1);
  return;
}




void FUN_0010482b(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00104df1(void)

{
  return;
}




void FUN_00105060(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103a10(undefined8 param_1)

{
  FUN_00103e76(param_1);
  return;
}




void FUN_00102c6a(undefined8 param_1)

{
  FUN_00102fda(param_1);
  return;
}




long FUN_001030ef(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010396a(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010396a(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103e06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010416b(param_1,param_2,param_3);
  return;
}




int FUN_00104d1c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_00104c1f(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108ea0)();
  return;
}




undefined4 * FUN_001045ea(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00104687(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010477e(&local_10);
  FUN_00103f86(uVar1);
  return;
}




void FUN_00104ddb(void)

{
  return;
}




void FUN_00104851(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104daf(void)

{
  return;
}




void FUN_001044b5(undefined8 param_1)

{
  FUN_00104502(param_1);
  return;
}




void FUN_001038dc(void)

{
  return;
}




undefined8 FUN_00102bc7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010416b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104370(param_1,param_2,param_3);
  return;
}




void FUN_0010492c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104d62(void)

{
  return;
}




undefined8 FUN_0010427a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102684(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00102720(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_00104883(*__ptr);
  free(__ptr);
  return;
}




void FUN_00102c8a(long *param_1)

{
  FUN_00102fea(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00102bde(param_1);
  return;
}




ulong FUN_00104b1b(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104d99(void)

{
  return;
}




void FUN_00103f51(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104210(param_1,param_2,param_3);
  return;
}




long FUN_00103a2e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103086(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103086(param_2);
  return lVar1 - *plVar2 >> 2;
}




long FUN_001043f1(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




long FUN_00102720(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




ulong * FUN_001044d3(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00104dfc(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong * FUN_001040ae(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001042c1(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_001044b5(param_1);
  puVar1 = (undefined8 *)FUN_001044d3(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00102cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103024(param_1);
  FUN_00103036(*param_1,param_1[1],uVar1);
  FUN_00102c8a(param_1);
  return;
}




undefined8 FUN_00103654(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103064(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b62(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010482b("Calling good()...");
  FUN_00102b52();
  FUN_0010482b("Finished good()");
  FUN_0010482b("Calling bad()...");
  FUN_00102744();
  FUN_0010482b("Finished bad()");
  return 0;
}




undefined8 FUN_0010396a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104d36(void)

{
  return;
}




void FUN_00104d8e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102584) */
/* WARNING: Removing unreachable block (ram,0x00102590) */

void FUN_00102560(void)

{
  return;
}




void FUN_00103b1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104006(param_2);
  uVar2 = FUN_00104006(param_1);
  FUN_00104018(uVar2,uVar1,param_3);
  return;
}




void FUN_00104dba(void)

{
  return;
}




void FUN_00102744(void)

{
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
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
  FUN_00102c1e(local_88);
  local_9c = -1;
  local_98 = 0xffffffff;
  local_98 = socket(2,1,6);
  if (local_98 != -1) {
    memset(&local_48,0,0x10);
    local_48.sa_family = 2;
    local_48.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_48.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 001027f7 to 0010295e has its CatchHandler @ 001029aa */
    iVar1 = connect(local_98,&local_48,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(local_98,local_2e,0xd,0);
      local_94 = (int)sVar2;
      if ((local_94 != -1) && (local_94 != 0)) {
        local_2e[local_94] = '\0';
        local_9c = atoi(local_2e);
      }
    }
  }
  if (local_98 != -1) {
    close(local_98);
  }
  local_90 = FUN_00102d24(local_88);
  FUN_00102d74(local_68,&local_90);
  FUN_00102da2(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102d24(local_88);
  FUN_00102d74(local_68,&local_90);
  FUN_00102da2(local_88,local_68[0],1,&local_9c);
  local_90 = FUN_00102d24(local_88);
  FUN_00102d74(local_68,&local_90);
  FUN_00102da2(local_88,local_68[0],1,&local_9c);
  FUN_00102e68(local_68,local_88);
                    /* try { // try from 00102966 to 0010296a has its CatchHandler @ 00102995 */
  FUN_001025e9(local_68);
  FUN_00102cdc(local_68);
  FUN_00102cdc(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103d1f(undefined8 param_1,undefined8 param_2)

{
  FUN_00103d4c(param_1,param_2);
  return param_1;
}




void FUN_00102e68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010377e(param_2);
  FUN_0010372d(&local_31,uVar1);
  uVar1 = FUN_00103706(param_2);
                    /* try { // try from 00102ece to 00102ed2 has its CatchHandler @ 00102f3b */
  FUN_00103790(param_1,uVar1,&local_31);
  FUN_00102c6a(&local_31);
  uVar2 = FUN_00103024(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_0010384e(param_2);
  uVar4 = FUN_001037f6(param_2);
                    /* try { // try from 00102f1c to 00102f20 has its CatchHandler @ 00102f59 */
  uVar1 = FUN_001038a6(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001043c0(param_1,param_2,param_3);
  return;
}




void FUN_001025e9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *__ptr;
  ulong local_18;
  
  piVar2 = (int *)FUN_00102720(param_1,2);
  iVar1 = *piVar2;
  __ptr = (undefined4 *)malloc((long)iVar1 << 2);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < (ulong)(long)iVar1; local_18 = local_18 + 1) {
    __ptr[local_18] = 0;
  }
  FUN_00104883(*__ptr);
  free(__ptr);
  return;
}




void FUN_00104d41(void)

{
  return;
}




void FUN_00104a07(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001048d7(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001041de(void)

{
  return;
}




void FUN_00104982(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001043c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010459a(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102543) */
/* WARNING: Removing unreachable block (ram,0x0010254f) */

void FUN_00102530(void)

{
  return;
}




void FUN_00105016(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00104158(void)

{
  return;
}




undefined8 FUN_00103c90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001040dd(param_1,param_2);
  }
  return uVar1;
}




void * FUN_0010471b(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00104d6d(void)

{
  return;
}




void FUN_00104dc5(void)

{
  return;
}




void FUN_00104957(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00104abb(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104ff7(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103948(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00105035(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104da4(void)

{
  return;
}




void FUN_00104a88(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00103f86(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f88(undefined8 param_1)

{
  FUN_001038dc(param_1);
  return;
}




undefined8 FUN_0010410b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001041f2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b52(void)

{
  FUN_001029d7();
  return;
}




undefined8 FUN_00104631(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010396a(&local_10);
  return *puVar1;
}




undefined8 FUN_00104f7e(undefined8 *param_1)

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




undefined8 FUN_00103024(undefined8 param_1)

{
  return param_1;
}



