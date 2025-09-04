
void * FUN_00103647(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103858(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104000(void)

{
  return;
}




ulong FUN_00103a47(long param_1,ulong param_2,long param_3)

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




void FUN_0010382d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102fae(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026a0(param_1);
  FUN_001031e9(uVar1);
  return;
}




void FUN_00101a6f(void)

{
  FUN_00101753();
  FUN_001018d6();
  return;
}




long FUN_00103319(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103091(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103298(param_1,param_2,param_3);
  return;
}




void FUN_00103cf1(void)

{
  return;
}




undefined8 FUN_00101a84(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103757("Calling good()...");
  FUN_00101a6f();
  FUN_00103757("Finished good()");
  FUN_00103757("Calling bad()...");
  FUN_001015ba();
  FUN_00103757("Finished bad()");
  return 0;
}




undefined8 FUN_0010264f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c41(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102718(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010286a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103442(param_2);
  uVar2 = FUN_00103442(param_1);
  FUN_00103454(uVar2,uVar1,param_3);
  return;
}




void FUN_00102056(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102ac2(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102576(local_80);
      local_60 = FUN_00102950(&local_88,&local_78);
      local_70 = FUN_00102bb2(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f46(local_80);
                    /* try { // try from 00102360 to 001023eb has its CatchHandler @ 001024a3 */
      FUN_00102a8d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f46(local_80);
      puVar2 = (undefined8 *)FUN_00101fa8(&local_88);
      local_70 = FUN_00102be9(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f46(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101fa8(&local_88);
      local_70 = FUN_00102be9(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f46(local_80);
      FUN_00101f58(*local_80,local_80[1],uVar1);
      FUN_00101f0c(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010289e(local_38,param_1,param_4);
                    /* try { // try from 001020e0 to 001022b3 has its CatchHandler @ 00102485 */
      local_50 = FUN_00102932(local_38);
      local_78 = FUN_00101c46(local_80);
      local_48 = FUN_00102950(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f46(local_80);
        FUN_00102994(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101fa8(&local_88);
        FUN_001029ec(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101fa8(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101fa8(&local_88);
        FUN_00102a3c(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f46(local_80);
        lVar4 = FUN_00102a8d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f46(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101fa8(&local_88);
        FUN_00102994(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101fa8(&local_88);
        FUN_00102a3c(*puVar2,local_40,local_50);
      }
      FUN_001028fe(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010288c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103252(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010342a(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_0010316d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103319(param_1,param_2,param_3);
  return;
}




void FUN_00101753(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b40(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 00101788 to 00101860 has its CatchHandler @ 001018ac */
  local_68 = operator_new(8);
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  FUN_00101d8a(local_38,local_58);
                    /* try { // try from 00101868 to 0010186c has its CatchHandler @ 00101897 */
  FUN_0010152a(local_38);
  FUN_00101bfe(local_38);
  FUN_00101bfe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001033dd(undefined8 param_1)

{
  FUN_0010342a(param_1);
  return;
}




void FUN_00103933(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




void FUN_00103c62(void)

{
  return;
}




void FUN_00102e73(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103138(param_1,param_2,param_3);
  return;
}




void FUN_00102932(undefined8 param_1)

{
  FUN_00102d98(param_1);
  return;
}




void FUN_00103883(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101efc(void)

{
  return;
}




undefined8 FUN_00102dae(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d5e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010283f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102d85(param_1,param_2);
  return;
}




void FUN_00103cba(void)

{
  return;
}




void FUN_001031b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010338f(param_1,param_2,param_3);
  return;
}




bool FUN_00103e2c(pthread_t *param_1)

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




void FUN_00102994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e27(param_2);
  uVar2 = FUN_00102e27(param_1);
  FUN_00102e73(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c8e(void)

{
  return;
}




ulong FUN_00103b4b(long param_1,ulong param_2,long param_3)

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




void FUN_00103454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f28(param_3);
  uVar2 = FUN_0010355d(local_28);
  uVar3 = FUN_0010355d(local_20);
  uVar1 = FUN_0010357e(uVar3,uVar2,uVar1);
  FUN_001031a2(&local_30,uVar1);
  return;
}




void FUN_001037af(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001037d7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103d12(void)

{
  return;
}




void FUN_001038d9(undefined4 param_1)

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




undefined8 FUN_001031a2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001031e9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001033dd(param_1);
  puVar1 = (undefined8 *)FUN_001033fb(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001027fe(void)

{
  return;
}




void FUN_0010152a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101596(param_1,2);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1,8);
  }
  return;
}




void FUN_001035b3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001036aa(&local_10);
  FUN_00102ea8(uVar1);
  return;
}




void FUN_00101bac(long *param_1)

{
  FUN_00101f0c(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101b00(param_1);
  return;
}




long FUN_00102d98(long param_1)

{
  return param_1 + 8;
}




void FUN_00101f86(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_001036aa(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103ce6(void)

{
  return;
}




undefined8 FUN_00103031(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010311a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010307e(void)

{
  return;
}




undefined8 FUN_00102ea8(undefined8 param_1)

{
  return param_1;
}




void FUN_001030c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102dae(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ae9(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103f61(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001039e7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101f0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010280d(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_00103c2a(void)

{
  return 1;
}




void FUN_00102c6e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010307e(param_1,param_2);
  return;
}




void FUN_001034c2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035b3(param_2);
  uVar2 = FUN_001035b3(param_1);
  FUN_001035d9(uVar2,uVar1,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101430();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00102d85(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001038ae(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




ulong * FUN_00102fd4(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103e87(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001032e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034c2(param_1,param_2,param_3);
  return;
}




void FUN_00102eba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f28(param_3);
  uVar2 = FUN_00102f28(local_28);
  uVar3 = FUN_00102f28(local_20);
  uVar1 = FUN_0010316d(uVar3,uVar2,uVar1);
  FUN_001031a2(&local_30,uVar1);
  return;
}




void FUN_00101bfe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f46(param_1);
  FUN_00101f58(*param_1,param_1[1],uVar1);
  FUN_00101bac(param_1);
  return;
}




long FUN_00102011(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010288c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010288c(param_2);
  return lVar1 - *plVar2 >> 3;
}




ulong * FUN_001033fb(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010395b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void * FUN_001036f4(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010357e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103647(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103d5f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d28,local_18);
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




void FUN_00101b8c(undefined8 param_1)

{
  FUN_00101efc(param_1);
  return;
}




void FUN_00101eaa(undefined8 param_1)

{
  FUN_001027fe(param_1);
  return;
}




undefined8 FUN_00101ae9(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103ca4(void)

{
  return;
}




undefined8 FUN_00101fba(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010286a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010311a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001028fe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d98(param_1);
  FUN_00102dfd(*param_1,uVar1);
  return;
}




void FUN_00101b60(undefined8 param_1)

{
  FUN_00101eaa(param_1);
  FUN_00101eca(param_1);
  return;
}




void FUN_00102f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031b8(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103eaa(undefined8 *param_1)

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




void FUN_0010377d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101d8a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026a0(param_2);
  FUN_0010264f(&local_31,uVar1);
  uVar1 = FUN_00102628(param_2);
                    /* try { // try from 00101df0 to 00101df4 has its CatchHandler @ 00101e5d */
  FUN_001026b2(param_1,uVar1,&local_31);
  FUN_00101b8c(&local_31);
  uVar2 = FUN_00101f46(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102770(param_2);
  uVar4 = FUN_00102718(param_2);
                    /* try { // try from 00101e3e to 00101e42 has its CatchHandler @ 00101e7b */
  uVar1 = FUN_001027c8(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101596(param_1,2);
  if ((void *)*puVar1 != (void *)0x0) {
    operator_delete((void *)*puVar1,8);
  }
  return;
}




undefined8 FUN_00102576(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f86(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cd0(void)

{
  return;
}




undefined8 FUN_00103c39(void)

{
  return 0;
}




undefined8 * FUN_00103512(undefined8 *param_1,long param_2,undefined8 *param_3)

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




long FUN_00101596(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dae(param_3);
  FUN_001030c2(param_1,param_2,uVar1);
  return;
}




void FUN_00103106(void)

{
  return;
}




void FUN_00103803(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f58(undefined8 param_1,undefined8 param_2)

{
  FUN_0010283f(param_1,param_2);
  return;
}




void FUN_00102a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f28(param_2);
  uVar2 = FUN_00102f28(param_1);
  FUN_00102f3a(uVar2,uVar1,param_3);
  return;
}




void FUN_00103f23(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103f90(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010156b(undefined8 param_1)

{
  FUN_00101596(param_1,2);
  return;
}




void FUN_001029ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ea8(param_2);
  uVar2 = FUN_00102ea8(param_1);
  FUN_00102eba(uVar2,uVar1,param_3);
  return;
}




void FUN_00101b40(undefined8 param_1)

{
  FUN_00101b20(param_1);
  return;
}




void FUN_00103d1d(void)

{
  return;
}




undefined8 FUN_00101c46(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f86(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010338f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f28(param_1);
  uVar1 = FUN_00103512(uVar1,param_2,param_3);
  FUN_001031a2(&local_10,uVar1);
  return;
}




void FUN_00102d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103091(param_1,param_2,param_3);
  return;
}




void FUN_00103c83(void)

{
  return;
}




void FUN_00103cc5(void)

{
  return;
}




undefined8 FUN_00102bb2(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103003(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102dfd(undefined8 param_1,undefined8 param_2)

{
  FUN_00103106(param_1,param_2);
  return;
}




void FUN_00103986(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010355d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010288c(&local_10);
  return *puVar1;
}




void FUN_00103d07(void)

{
  return;
}




void FUN_00102be9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103031(param_2);
  uVar2 = FUN_00103031(param_1);
  FUN_00102e73(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103d28(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




int FUN_00103c48(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b20(undefined8 param_1)

{
  FUN_00101b60(param_1);
  return;
}




undefined8 FUN_00102e27(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010311a(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032e8(param_1,param_2,param_3);
  return;
}




void FUN_00103cdb(void)

{
  return;
}




void FUN_00101b00(undefined8 param_1)

{
  FUN_00101b8c(param_1);
  return;
}




void FUN_00102cce(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102bb2(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_00103442(undefined8 param_1)

{
  return param_1;
}




void FUN_001035d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f28(param_3);
  uVar2 = FUN_00102f28(local_28);
  uVar3 = FUN_00102f28(local_20);
  uVar1 = FUN_001036bf(uVar3,uVar2,uVar1);
  FUN_001031a2(&local_30,uVar1);
  return;
}




undefined8 FUN_00102c41(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c6e(param_1,param_2);
  return param_1;
}




void FUN_00103757(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101eca(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00101fa8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f28(undefined8 param_1)

{
  return param_1;
}




void FUN_001015ba(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b40(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 001015ef to 001016dd has its CatchHandler @ 00101729 */
  local_68 = operator_new(8);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68,8);
  }
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  FUN_00101d8a(local_38,local_58);
                    /* try { // try from 001016e5 to 001016e9 has its CatchHandler @ 00101714 */
  FUN_001014e9(local_38);
  FUN_00101bfe(local_38);
  FUN_00101bfe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103caf(void)

{
  return;
}




void FUN_00101c96(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101fa8(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_001018d6(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b40(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010190b to 001019f9 has its CatchHandler @ 00101a45 */
  local_68 = operator_new(8);
  if (local_68 != (void *)0x0) {
    operator_delete(local_68,8);
  }
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101c46(local_58);
  FUN_00101c96(local_38,&local_60);
  FUN_00101cc4(local_58,local_38[0],1,&local_68);
  FUN_00101d8a(local_38,local_58);
                    /* try { // try from 00101a01 to 00101a05 has its CatchHandler @ 00101a30 */
  FUN_0010156b(local_38);
  FUN_00101bfe(local_38);
  FUN_00101bfe(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f46(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102ac2(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102fae(param_1);
  lVar2 = FUN_00102628(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102628(local_40);
  local_30 = FUN_00102628(local_40);
  plVar3 = (long *)FUN_00102fd4(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102628(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102fae(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102fae(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103c99(void)

{
  return;
}




void FUN_00103cfc(void)

{
  return;
}




void FUN_0010289e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102dae(param_3);
  uVar2 = FUN_00102d98(param_1);
  FUN_00102dc0(*param_1,uVar2,uVar1);
  return;
}




long FUN_00102950(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101fa8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101fa8(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102a8d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f78(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101fba(param_1);
  local_18 = FUN_00102011(&local_38,&local_20);
  local_20 = FUN_00102576(local_30);
  uVar1 = FUN_001025c2(&local_20,local_18);
  FUN_00102056(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102576(local_30);
  FUN_001025c2(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c78(void)

{
  return;
}




void FUN_001036bf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036f4(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001026a0(undefined8 param_1)

{
  return param_1;
}




long FUN_00102628(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_0010280d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d5e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010342a(void)

{
  return 0xfffffffffffffff;
}




void FUN_001027c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d28(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001025c2(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101f86(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039b4(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102770(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010286a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f3a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102c98(undefined8 param_1,undefined8 param_2)

{
  FUN_00102c6e(param_1,param_2);
  FUN_00101eca(param_1);
  return;
}




void FUN_001026b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c98(param_1,param_3);
                    /* try { // try from 001026ec to 001026f0 has its CatchHandler @ 001026f3 */
  FUN_00102cce(param_1,param_2);
  return;
}




void FUN_00103c6d(void)

{
  return;
}




void FUN_00103f42(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010286a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103003(undefined8 param_1,undefined8 param_2)

{
  FUN_00103252(param_1,param_2,0);
  return;
}



