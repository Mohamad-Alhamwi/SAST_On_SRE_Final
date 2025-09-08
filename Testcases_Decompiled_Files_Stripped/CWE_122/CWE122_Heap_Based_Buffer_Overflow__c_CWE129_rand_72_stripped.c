
void FUN_00103682(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010315c(param_3);
  uVar2 = FUN_00103787(local_28);
  uVar3 = FUN_00103787(local_20);
  uVar1 = FUN_001037a8(uVar3,uVar2,uVar1);
  FUN_001033d0(&local_30,uVar1);
  return;
}




void * FUN_0010391e(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103ad8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001038e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010391e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010305b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103348(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001014e9(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_0010178a(param_1,2);
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
    FUN_00103981("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039d9(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_0010339b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103547(param_1,param_2,param_3);
  return;
}




void FUN_0010418b(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010316e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103ece(void)

{
  return;
}




void FUN_001015c6(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_0010178a(param_1,2);
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
    FUN_00103981("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039d9(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




undefined8 FUN_001021dc(undefined8 param_1)

{
  return param_1;
}




void FUN_0010228a(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102cf6(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001027aa(local_80);
      local_60 = FUN_00102b84(&local_88,&local_78);
      local_70 = FUN_00102de6(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_0010217a(local_80);
                    /* try { // try from 00102594 to 0010261f has its CatchHandler @ 001026d7 */
      FUN_00102cc1(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_0010217a(local_80);
      puVar2 = (undefined8 *)FUN_001021dc(&local_88);
      local_70 = FUN_00102e1d(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_0010217a(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001021dc(&local_88);
      local_70 = FUN_00102e1d(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_0010217a(local_80);
      FUN_0010218c(*local_80,local_80[1],uVar1);
      FUN_00102140(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102ad2(local_38,param_1,param_4);
                    /* try { // try from 00102314 to 001024e7 has its CatchHandler @ 001026b9 */
      local_50 = FUN_00102b66(local_38);
      local_78 = FUN_00101e7a(local_80);
      local_48 = FUN_00102b84(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_0010217a(local_80);
        FUN_00102bc8(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_001021dc(&local_88);
        FUN_00102c20(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001021dc(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001021dc(&local_88);
        FUN_00102c70(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_0010217a(local_80);
        lVar4 = FUN_00102cc1(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_0010217a(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001021dc(&local_88);
        FUN_00102bc8(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_001021dc(&local_88);
        FUN_00102c70(*puVar2,local_40,local_50);
      }
      FUN_00102b32(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103348(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102140(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a41(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_0010294c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a9e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103334(void)

{
  return;
}




undefined8 FUN_00103261(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103348(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f1b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_001033e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035bd(param_1,param_2,param_3);
  return;
}




void FUN_00103f3c(void)

{
  return;
}




void FUN_00103a01(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103bde(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102f92(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a32(void)

{
  return;
}




void FUN_00103981(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e32(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010217a(param_1);
  FUN_0010218c(*param_1,param_1[1],uVar1);
  FUN_00101de0(param_1);
  return;
}




void FUN_00102ea2(undefined8 param_1,undefined8 param_2)

{
  FUN_001032ae(param_1,param_2);
  return;
}




void FUN_00103f26(void)

{
  return;
}




void FUN_0010416c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102de6(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103233(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_001028d4(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e97(void)

{
  return;
}




void FUN_001032c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034c6(param_1,param_2,param_3);
  return;
}




void FUN_00102a73(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fb9(param_1,param_2);
  return;
}




undefined8 FUN_00103e54(void)

{
  return 1;
}




void FUN_00103b03(undefined4 param_1)

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




void FUN_00103516(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036f0(param_1,param_2,param_3);
  return;
}




void FUN_00103803(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010315c(param_3);
  uVar2 = FUN_0010315c(local_28);
  uVar3 = FUN_0010315c(local_20);
  uVar1 = FUN_001038e9(uVar3,uVar2,uVar1);
  FUN_001033d0(&local_30,uVar1);
  return;
}




void * FUN_00103871(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103eef(void)

{
  return;
}




void FUN_001039d9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001032ae(void)

{
  return;
}




void FUN_001032f2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102fe2(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101d1d(4,param_2);
  *puVar2 = uVar1;
  return;
}




long FUN_0010285c(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




undefined8 FUN_00103658(void)

{
  return 0x1fffffffffffffff;
}




bool FUN_00104056(pthread_t *param_1)

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




undefined8 FUN_00101cb8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103981("Calling good()...");
  FUN_00101ca3();
  FUN_00103981("Finished good()");
  FUN_00103981("Calling bad()...");
  FUN_001017ae();
  FUN_00103981("Finished bad()");
  return 0;
}




undefined8 FUN_00102e75(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ea2(param_1,param_2);
  return param_1;
}




void FUN_00101fbe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028d4(param_2);
  FUN_00102883(&local_31,uVar1);
  uVar1 = FUN_0010285c(param_2);
                    /* try { // try from 00102024 to 00102028 has its CatchHandler @ 00102091 */
  FUN_001028e6(param_1,uVar1,&local_31);
  FUN_00101dc0(&local_31);
  uVar2 = FUN_0010217a(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001029a4(param_2);
  uVar4 = FUN_0010294c(param_2);
                    /* try { // try from 00102072 to 00102076 has its CatchHandler @ 001020af */
  uVar1 = FUN_001029fc(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001036f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001037dd(param_2);
  uVar2 = FUN_001037dd(param_1);
  FUN_00103803(uVar2,uVar1,param_3);
  return;
}




void FUN_00103ec3(void)

{
  return;
}




void FUN_001030ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_0010315c(param_3);
  uVar2 = FUN_0010315c(local_28);
  uVar3 = FUN_0010315c(local_20);
  uVar1 = FUN_0010339b(uVar3,uVar2,uVar1);
  FUN_001033d0(&local_30,uVar1);
  return;
}




undefined8 FUN_0010315c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102fb9(void)

{
  return;
}




void FUN_001031a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033e6(param_1,param_2,param_3);
  return;
}




void FUN_00103aad(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101e7a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021ba(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b5d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102c20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030dc(param_2);
  uVar2 = FUN_001030dc(param_1);
  FUN_001030ee(uVar2,uVar1,param_3);
  return;
}




long FUN_00103547(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00102e1d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103261(param_2);
  uVar2 = FUN_00103261(param_1);
  FUN_001030a7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001039a7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001030a7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103366(param_1,param_2,param_3);
  return;
}




void FUN_00103366(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103516(param_1,param_2,param_3);
  return;
}




long FUN_00102fcc(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00101d1d(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102130(void)

{
  return;
}




undefined8 FUN_00103417(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_0010360b(param_1);
  puVar1 = (undefined8 *)FUN_00103629(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103a2d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103787(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102ac0(&local_10);
  return *puVar1;
}




ulong * FUN_00103629(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103f10(void)

{
  return;
}




void FUN_00103f52(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101ca3(void)

{
  FUN_0010196b();
  FUN_00101ae6();
  return;
}




void FUN_00101dc0(undefined8 param_1)

{
  FUN_00102130(param_1);
  return;
}




void FUN_001016a3(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_0010178a(param_1,2);
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
    FUN_00103981("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_001039d9(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




int FUN_00103e72(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001020fe(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




ulong * FUN_00103204(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001029fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f5c(param_1,param_2,param_3);
  return;
}




void FUN_00101ae6(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d74(local_58);
  local_64 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_64 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_64 = rand();
    local_64 = local_64 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
                    /* try { // try from 00101b98 to 00101c2d has its CatchHandler @ 00101c79 */
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  FUN_00101fbe(local_38,local_58);
                    /* try { // try from 00101c35 to 00101c39 has its CatchHandler @ 00101c64 */
  FUN_001016a3(local_38);
  FUN_00101e32(local_38);
  FUN_00101e32(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103031(undefined8 param_1,undefined8 param_2)

{
  FUN_00103334(param_1,param_2);
  return;
}




void FUN_001037dd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001038d4(&local_10);
  FUN_001030dc(uVar1);
  return;
}




void FUN_0010414d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101d94(undefined8 param_1)

{
  FUN_001020de(param_1);
  FUN_001020fe(param_1);
  return;
}




undefined8 FUN_0010217a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ead(void)

{
  return;
}




void FUN_00103b85(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001040b1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001035bd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010315c(param_1);
  uVar1 = FUN_00103740(uVar1,param_2,param_3);
  FUN_001033d0(&local_10,uVar1);
  return;
}




void FUN_00102ecc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ea2(param_1,param_2);
  FUN_001020fe(param_1);
  return;
}




void FUN_001031de(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028d4(param_1);
  FUN_00103417(uVar1);
  return;
}




undefined8 FUN_001038d4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_001021ee(param_1);
  local_18 = FUN_00102245(&local_38,&local_20);
  local_20 = FUN_001027aa(local_30);
  uVar1 = FUN_001027f6(&local_20,local_18);
  FUN_0010228a(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001027aa(local_30);
  FUN_001027f6(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102ac0(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ee0)();
  return;
}




undefined8 FUN_00103f89(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f52,local_18);
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




void FUN_00102a9e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010196b(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d74(local_58);
  local_64 = 7;
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
                    /* try { // try from 001019db to 00101a70 has its CatchHandler @ 00101abc */
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  FUN_00101fbe(local_38,local_58);
                    /* try { // try from 00101a78 to 00101a7c has its CatchHandler @ 00101aa7 */
  FUN_001015c6(local_38);
  FUN_00101e32(local_38);
  FUN_00101e32(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103efa(void)

{
  return;
}




void FUN_00101d34(undefined8 param_1)

{
  FUN_00101dc0(param_1);
  return;
}




undefined8 FUN_001033d0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




ulong FUN_00102cf6(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001031de(param_1);
  lVar2 = FUN_0010285c(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010285c(local_40);
  local_30 = FUN_0010285c(local_40);
  plVar3 = (long *)FUN_00103204(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010285c(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001031de(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001031de(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00103d75(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105100,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ea2(void)

{
  return;
}




void FUN_00102b66(undefined8 param_1)

{
  FUN_00102fcc(param_1);
  return;
}




void FUN_00102f02(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102de6(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00103a57(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010360b(undefined8 param_1)

{
  FUN_00103658(param_1);
  return;
}




void FUN_00103f31(void)

{
  return;
}




void FUN_00103ee4(void)

{
  return;
}




long FUN_00102b84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001021dc(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001021dc(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103f05(void)

{
  return;
}




undefined8 FUN_001040d4(undefined8 *param_1)

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




void FUN_00103bb0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001017ae(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  uint local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d74(local_58);
  local_64 = 0xffffffff;
  uVar1 = rand();
  if ((uVar1 & 1) == 0) {
    iVar2 = rand();
    iVar3 = rand();
    uVar1 = rand();
    local_64 = ~(uVar1 ^ iVar2 << 0x1e ^ iVar3 << 0xf);
  }
  else {
    iVar2 = rand();
    iVar3 = rand();
    local_64 = rand();
    local_64 = local_64 ^ iVar2 << 0x1e ^ iVar3 << 0xf;
  }
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
                    /* try { // try from 00101860 to 001018f5 has its CatchHandler @ 00101941 */
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101e7a(local_58);
  FUN_00101eca(local_38,&local_60);
  FUN_00101ef8(local_58,local_38[0],1,&local_64);
  FUN_00101fbe(local_38,local_58);
                    /* try { // try from 001018fd to 00101901 has its CatchHandler @ 0010192c */
  FUN_001014e9(local_38);
  FUN_00101e32(local_38);
  FUN_00101e32(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032c1(param_1,param_2,param_3);
  return;
}




void FUN_00103233(undefined8 param_1,undefined8 param_2)

{
  FUN_00103480(param_1,param_2,0);
  return;
}




void FUN_00103eb8(void)

{
  return;
}




long FUN_0010178a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00102cc1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031a8(param_1,param_2,param_3);
  return;
}




void FUN_001034c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103670(param_2);
  uVar2 = FUN_00103670(param_1);
  FUN_00103682(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103670(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010305b(param_2);
  uVar2 = FUN_0010305b(param_1);
  FUN_001030a7(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001037a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103871(param_1,param_2,param_3);
  return;
}




void FUN_00101de0(long *param_1)

{
  FUN_00102140(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101d34(param_1);
  return;
}




void FUN_001020de(undefined8 param_1)

{
  FUN_00102a32(param_1);
  return;
}




undefined8 FUN_00102fe2(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00103e8c(void)

{
  return;
}




void FUN_00101d54(undefined8 param_1)

{
  FUN_00101d94(param_1);
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




void FUN_00101eca(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001021dc(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102b32(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fcc(param_1);
  FUN_00103031(*param_1,uVar1);
  return;
}




undefined8 FUN_00103e63(void)

{
  return 0;
}




void FUN_00103ed9(void)

{
  return;
}




undefined8 FUN_001029a4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102a9e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a41(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f92(param_1,param_2,param_3);
  return;
}




void FUN_00102ad2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102fe2(param_3);
  uVar2 = FUN_00102fcc(param_1);
  FUN_00102ff4(*param_1,uVar2,uVar1);
  return;
}




void FUN_00101d74(undefined8 param_1)

{
  FUN_00101d54(param_1);
  return;
}




ulong FUN_00103c71(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050f8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 * FUN_00103740(undefined4 *param_1,long param_2,undefined4 *param_3)

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




undefined8 FUN_001021ee(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102a9e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f47(void)

{
  return;
}




void FUN_001021ba(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00102883(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e75(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00104230(void)

{
  return;
}




void FUN_00103480(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103658(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




undefined8 FUN_001027f6(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_001021ba(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010218c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a73(param_1,param_2);
  return;
}




void FUN_00103a82(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001027aa(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021ba(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102fe2(param_3);
  FUN_001032f2(param_1,param_2,uVar1);
  return;
}




void FUN_00102c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010315c(param_2);
  uVar2 = FUN_0010315c(param_1);
  FUN_0010316e(uVar2,uVar1,param_3);
  return;
}




long FUN_00102245(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102ac0(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102ac0(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103c11(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001041c0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001028e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ecc(param_1,param_3);
                    /* try { // try from 00102920 to 00102924 has its CatchHandler @ 00102927 */
  FUN_00102f02(param_1,param_2);
  return;
}




undefined8 FUN_001030dc(undefined8 param_1)

{
  return param_1;
}



