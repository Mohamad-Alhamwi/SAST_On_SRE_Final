
void FUN_001037dc(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103aab(void)

{
  return;
}




void FUN_00103b0e(void)

{
  return;
}




void FUN_00103aa0(void)

{
  return;
}




long FUN_00103141(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00101d34(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102635(param_1,param_2,param_3);
  }
  return;
}




void FUN_0010357f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010326a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d6e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001029da(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e2b(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d50(param_2);
  uVar2 = FUN_00102d50(param_1);
  FUN_00102d62(uVar2,uVar1,param_3);
  return;
}




void FUN_001034e7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010351c(param_1,param_2,param_3);
  return;
}




void FUN_0010275a(undefined8 param_1)

{
  FUN_00102bc0(param_1);
  return;
}




void FUN_00102b86(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001034d2(undefined8 *param_1)

{
  return *param_1;
}




void FUN_001033a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010346f(param_1,param_2,param_3);
  return;
}




void FUN_00101cf2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001035d7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101948(undefined8 param_1)

{
  FUN_00101988(param_1);
  return;
}




void FUN_00103ad7(void)

{
  return;
}




void FUN_00101968(undefined8 param_1)

{
  FUN_00101948(param_1);
  return;
}




void FUN_00101988(undefined8 param_1)

{
  FUN_00101cd2(param_1);
  FUN_00101cf2(param_1);
  return;
}




void FUN_00103b45(void)

{
  return;
}




undefined8 FUN_00102fca(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102bd6(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ab6(void)

{
  return;
}




void FUN_001025f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b50(param_1,param_2,param_3);
  return;
}




void FUN_00102f2e(void)

{
  return;
}




void FUN_00102ea6(void)

{
  return;
}




void FUN_00102af6(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_001029da(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103d89(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103401(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d50(param_3);
  uVar2 = FUN_00102d50(local_28);
  uVar3 = FUN_00102d50(local_20);
  uVar1 = FUN_001034e7(uVar3,uVar2,uVar1);
  FUN_00102fca(&local_30,uVar1);
  return;
}




void FUN_00102c25(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f2e(param_1,param_2);
  return;
}




undefined8 FUN_00103caf(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103b19(void)

{
  return;
}




void FUN_00103680(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




int FUN_00103a70(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103a8a(void)

{
  return;
}




void FUN_00103acc(void)

{
  return;
}




void FUN_001033db(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034d2(&local_10);
  FUN_00102cd0(uVar1);
  return;
}




void * FUN_0010346f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001014c9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101572(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 5;
  FUN_00103680(*puVar1);
  free(puVar1);
  return;
}




void FUN_00102a96(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ea6(param_1,param_2);
  return;
}




void FUN_00101abe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101dd0(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00103783(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010239e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dae(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102eea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102bd6(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101911(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102692(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010380f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101423) */
/* WARNING: Removing unreachable block (ram,0x0010142f) */

void FUN_00101410(void)

{
  return;
}




ulong * FUN_00103223(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103252(void)

{
  return 0xfffffffffffffff;
}




void FUN_00102fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031b7(param_1,param_2,param_3);
  return;
}




void FUN_00101596(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101968(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(8);
  local_60 = FUN_00101a6e(local_58);
  FUN_00101abe(local_38,&local_60);
                    /* try { // try from 0010160e to 001016a3 has its CatchHandler @ 001016ef */
  FUN_00101aec(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a6e(local_58);
  FUN_00101abe(local_38,&local_60);
  FUN_00101aec(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a6e(local_58);
  FUN_00101abe(local_38,&local_60);
  FUN_00101aec(local_58,local_38[0],1,&local_68);
  FUN_00101bb2(local_38,local_58);
                    /* try { // try from 001016ab to 001016af has its CatchHandler @ 001016da */
  FUN_001014c9(local_38);
  FUN_00101a26(local_38);
  FUN_00101a26(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010151a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101572(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
    FUN_00103680(*puVar1);
    free(puVar1);
  }
  return;
}




void FUN_0010327c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d50(param_3);
  uVar2 = FUN_00103385(local_28);
  uVar3 = FUN_00103385(local_20);
  uVar1 = FUN_001033a6(uVar3,uVar2,uVar1);
  FUN_00102fca(&local_30,uVar1);
  return;
}




void FUN_00103b03(void)

{
  return;
}




void FUN_00102626(void)

{
  return;
}




void FUN_00103b24(void)

{
  return;
}




void FUN_00102dd6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024c8(param_1);
  FUN_00103011(uVar1);
  return;
}




void FUN_001036ab(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a26(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d6e(param_1);
  FUN_00101d80(*param_1,param_1[1],uVar1);
  FUN_001019d4(param_1);
  return;
}




void FUN_00102eb9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030c0(param_1,param_2,param_3);
  return;
}




void FUN_001019d4(long *param_1)

{
  FUN_00101d34(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101928(param_1);
  return;
}




void FUN_00103ac1(void)

{
  return;
}




void FUN_001031b7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d50(param_1);
  uVar1 = FUN_0010333a(uVar1,param_2,param_3);
  FUN_00102fca(&local_10,uVar1);
  return;
}




void * FUN_0010351c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00103011(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103205(param_1);
  puVar1 = (undefined8 *)FUN_00103223(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_001023ea(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101dae(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102726(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bc0(param_1);
  FUN_00102c25(*param_1,uVar1);
  return;
}




void FUN_001035ff(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103ae2(void)

{
  return;
}




ulong FUN_00103973(long param_1,ulong param_2,long param_3)

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




void FUN_0010375b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e7e(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_001028ea(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010239e(local_80);
      local_60 = FUN_00102778(&local_88,&local_78);
      local_70 = FUN_001029da(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d6e(local_80);
                    /* try { // try from 00102188 to 00102213 has its CatchHandler @ 001022cb */
      FUN_001028b5(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d6e(local_80);
      puVar2 = (undefined8 *)FUN_00101dd0(&local_88);
      local_70 = FUN_00102a11(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d6e(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101dd0(&local_88);
      local_70 = FUN_00102a11(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d6e(local_80);
      FUN_00101d80(*local_80,local_80[1],uVar1);
      FUN_00101d34(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026c6(local_38,param_1,param_4);
                    /* try { // try from 00101f08 to 001020db has its CatchHandler @ 001022ad */
      local_50 = FUN_0010275a(local_38);
      local_78 = FUN_00101a6e(local_80);
      local_48 = FUN_00102778(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d6e(local_80);
        FUN_001027bc(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101dd0(&local_88);
        FUN_00102814(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101dd0(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101dd0(&local_88);
        FUN_00102864(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d6e(local_80);
        lVar4 = FUN_001028b5(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d6e(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101dd0(&local_88);
        FUN_001027bc(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101dd0(&local_88);
        FUN_00102864(*puVar2,local_40,local_50);
      }
      FUN_00102726(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102540(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102692(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d80(undefined8 param_1,undefined8 param_2)

{
  FUN_00102667(param_1,param_2);
  return;
}




void FUN_00103d4b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001026c6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102bd6(param_3);
  uVar2 = FUN_00102bc0(param_1);
  FUN_00102be8(*param_1,uVar2,uVar1);
  return;
}




undefined8 * FUN_0010333a(undefined8 *param_1,long param_2,undefined8 *param_3)

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




long FUN_00102bc0(long param_1)

{
  return param_1 + 8;
}




long FUN_00101e39(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026b4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026b4(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ea(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103a61(void)

{
  return 0;
}




void FUN_001024da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ac0(param_1,param_3);
                    /* try { // try from 00102514 to 00102518 has its CatchHandler @ 0010251b */
  FUN_00102af6(param_1,param_2);
  return;
}




undefined8 FUN_00101a6e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dae(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102778(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101dd0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101dd0(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00103e30(void)

{
  return;
}




void FUN_00103b2f(void)

{
  return;
}




void FUN_001036d6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101bb2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024c8(param_2);
  FUN_00102477(&local_31,uVar1);
  uVar1 = FUN_00102450(param_2);
                    /* try { // try from 00101c18 to 00101c1c has its CatchHandler @ 00101c85 */
  FUN_001024da(param_1,uVar1,&local_31);
  FUN_001019b4(&local_31);
  uVar2 = FUN_00101d6e(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102598(param_2);
  uVar4 = FUN_00102540(param_2);
                    /* try { // try from 00101c66 to 00101c6a has its CatchHandler @ 00101ca3 */
  uVar1 = FUN_001025f0(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f42(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001032ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033db(param_2);
  uVar2 = FUN_001033db(param_1);
  FUN_00103401(uVar2,uVar1,param_3);
  return;
}




void FUN_00103a95(void)

{
  return;
}




void FUN_00101928(undefined8 param_1)

{
  FUN_001019b4(param_1);
  return;
}




void FUN_00102667(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bad(param_1,param_2);
  return;
}




void FUN_00102c9b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f60(param_1,param_2,param_3);
  return;
}




void FUN_00101aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101de2(param_1);
  local_18 = FUN_00101e39(&local_38,&local_20);
  local_20 = FUN_0010239e(local_30);
  uVar1 = FUN_001023ea(&local_20,local_18);
  FUN_00101e7e(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010239e(local_30);
  FUN_001023ea(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c4f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f42(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101de2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102692(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102450(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001035a5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102e59(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f42(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00103c54(pthread_t *param_1)

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




void FUN_00103dc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102d50(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103110(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101410();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00103aed(void)

{
  return;
}




void FUN_00103701(undefined4 param_1)

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




void FUN_00102d62(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010189c(void)

{
  FUN_00101719();
  return;
}




void FUN_00103b3a(void)

{
  return;
}




undefined8 FUN_00101dd0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f95(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103141(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103385(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026b4(&local_10);
  return *puVar1;
}




/* WARNING: Removing unreachable block (ram,0x00101464) */
/* WARNING: Removing unreachable block (ram,0x00101470) */

void FUN_00101440(void)

{
  return;
}




void FUN_00101dae(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102e2b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010307a(param_1,param_2,0);
  return;
}




void FUN_00103655(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001037ae(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102da0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fe0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103a52(void)

{
  return 1;
}




undefined8 FUN_00102598(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102692(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101719(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101968(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(8);
  local_60 = FUN_00101a6e(local_58);
  FUN_00101abe(local_38,&local_60);
                    /* try { // try from 00101791 to 00101826 has its CatchHandler @ 00101872 */
  FUN_00101aec(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a6e(local_58);
  FUN_00101abe(local_38,&local_60);
  FUN_00101aec(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a6e(local_58);
  FUN_00101abe(local_38,&local_60);
  FUN_00101aec(local_58,local_38[0],1,&local_68);
  FUN_00101bb2(local_38,local_58);
                    /* try { // try from 0010182e to 00101832 has its CatchHandler @ 0010185d */
  FUN_0010151a(local_38);
  FUN_00101a26(local_38);
  FUN_00101a26(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00101572(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_001018ac(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010357f("Calling good()...");
  FUN_0010189c();
  FUN_0010357f("Finished good()");
  FUN_0010357f("Calling bad()...");
  FUN_00101596();
  FUN_0010357f("Finished bad()");
  return 0;
}




void FUN_00101cd2(undefined8 param_1)

{
  FUN_00102626(param_1);
  return;
}




undefined8 FUN_001026b4(undefined8 param_1)

{
  return param_1;
}




void FUN_0010307a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103252(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103d6a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102477(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a69(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101d24(void)

{
  return;
}




void FUN_00102635(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b86(param_1,param_2,param_3);
  return;
}




void FUN_00102ce2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d50(param_3);
  uVar2 = FUN_00102d50(local_28);
  uVar3 = FUN_00102d50(local_20);
  uVar1 = FUN_00102f95(uVar3,uVar2,uVar1);
  FUN_00102fca(&local_30,uVar1);
  return;
}




undefined8 FUN_00103cd2(undefined8 *param_1)

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




void FUN_00102bad(void)

{
  return;
}




void FUN_00102be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bd6(param_3);
  FUN_00102eea(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102cd0(undefined8 param_1)

{
  return param_1;
}




void FUN_001019b4(undefined8 param_1)

{
  FUN_00101d24(param_1);
  return;
}




undefined8 FUN_00101911(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001024c8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103b87(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b50,local_18);
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




ulong FUN_0010386f(long param_1,ulong param_2,long param_3)

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




void FUN_001028b5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102da0(param_1,param_2,param_3);
  return;
}




void FUN_00102814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cd0(param_2);
  uVar2 = FUN_00102cd0(param_1);
  FUN_00102ce2(uVar2,uVar1,param_3);
  return;
}




void FUN_00102ac0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a96(param_1,param_2);
  FUN_00101cf2(param_1);
  return;
}




void FUN_0010362b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00102a69(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a96(param_1,param_2);
  return param_1;
}




void FUN_001027bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c4f(param_2);
  uVar2 = FUN_00102c4f(param_1);
  FUN_00102c9b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee8)();
  return;
}




void FUN_00103af8(void)

{
  return;
}




void FUN_00102a11(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e59(param_2);
  uVar2 = FUN_00102e59(param_1);
  FUN_00102c9b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001030c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010326a(param_2);
  uVar2 = FUN_0010326a(param_1);
  FUN_0010327c(uVar2,uVar1,param_3);
  return;
}




ulong * FUN_00102dfc(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




ulong FUN_001028ea(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102dd6(param_1);
  lVar2 = FUN_00102450(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102450(local_40);
  local_30 = FUN_00102450(local_40);
  plVar3 = (long *)FUN_00102dfc(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102450(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102dd6(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102dd6(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103b50(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102eb9(param_1,param_2,param_3);
  return;
}




void FUN_00103205(undefined8 param_1)

{
  FUN_00103252(param_1);
  return;
}



