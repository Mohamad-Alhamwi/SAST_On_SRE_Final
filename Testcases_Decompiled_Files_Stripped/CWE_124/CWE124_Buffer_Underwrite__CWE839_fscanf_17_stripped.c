
void FUN_00101c60(void)

{
  return;
}




void FUN_001017b4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104028 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104028 = 1;
    return;
  }
  return;
}




void FUN_00101cb8(void)

{
  return;
}




void FUN_00101c29(void)

{
  return;
}




undefined8 FUN_00101699(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101708("Calling good()...");
  FUN_0010167a();
  FUN_00101708("Finished good()");
  FUN_00101708("Calling bad()...");
  FUN_001013c9();
  FUN_00101708("Finished bad()");
  return 0;
}




void FUN_00101c55(void)

{
  return;
}




void FUN_00101cce(void)

{
  return;
}




void FUN_00101cc3(void)

{
  return;
}




ulong FUN_00101afc(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020e8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001014b5(void)

{
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = -1;
  for (local_44 = 0; local_44 < 1; local_44 = local_44 + 1) {
    __isoc99_fscanf(stdin,&DAT_00102008,&local_48);
  }
  for (local_40 = 0; local_40 < 1; local_40 = local_40 + 1) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if ((local_48 < 0) || (9 < local_48)) {
      FUN_00101708("ERROR: Array index is out-of-bounds");
    }
    else {
      *(undefined4 *)((long)&local_38 + (long)local_48 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_00101760(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101c13(void)

{
  return;
}




void FUN_00101c6b(void)

{
  return;
}




undefined8 FUN_00101e38(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101fb0(void)

{
  return;
}




void FUN_00101ef3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101937(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101ed4(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101965(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101cd9(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010190c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_00101cad(void)

{
  return;
}




void FUN_00101f12(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101bdb(void)

{
  return 1;
}




void FUN_00101c97(void)

{
  return;
}




void FUN_0010167a(void)

{
  FUN_001014b5();
  FUN_001015a8();
  return;
}




void FUN_00101c8c(void)

{
  return;
}




void FUN_0010185f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101bea(void)

{
  return 0;
}




void FUN_0010172e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101d10(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cd9,local_18);
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




void FUN_00101760(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101788(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017de(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_001019f8(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020e0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101834(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




int FUN_00101bf9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c1e(void)

{
  return;
}




void FUN_00101809(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101c81(void)

{
  return;
}




undefined8 FUN_00101e5b(undefined8 *param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




void FUN_001018e4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010188a(undefined4 param_1)

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




void FUN_00101998(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001015a8(void)

{
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = -1;
  for (local_48 = 0; local_48 < 1; local_48 = local_48 + 1) {
    local_40 = 7;
  }
  for (local_44 = 0; local_44 < 1; local_44 = local_44 + 1) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_40 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_40 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_00101760(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_00101708("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101708(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c3f(void)

{
  return;
}




void FUN_001013c9(void)

{
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = -1;
  for (local_44 = 0; local_44 < 1; local_44 = local_44 + 1) {
    __isoc99_fscanf(stdin,&DAT_00102008,&local_48);
  }
  for (local_40 = 0; local_40 < 1; local_40 = local_40 + 1) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    if (local_48 < 10) {
      *(undefined4 *)((long)&local_38 + (long)local_48 * 4) = 1;
      for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
        FUN_00101760(*(undefined4 *)((long)&local_38 + (long)local_3c * 4));
      }
    }
    else {
      FUN_00101708("ERROR: Array index is negative.");
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00101ddd(pthread_t *param_1)

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




void FUN_00101c76(void)

{
  return;
}




void FUN_00101ca2(void)

{
  return;
}




void FUN_00101c34(void)

{
  return;
}




void FUN_00101c4a(void)

{
  return;
}




void FUN_00101f40(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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



