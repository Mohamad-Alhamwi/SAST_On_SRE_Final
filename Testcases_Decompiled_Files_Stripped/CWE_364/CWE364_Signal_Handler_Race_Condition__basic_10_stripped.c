
void FUN_00101999(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102010(void)

{
  return;
}




void FUN_00101c75(void)

{
  return;
}




void FUN_00101d25(void)

{
  return;
}




void FUN_00101896(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101ebd(undefined8 *param_1)

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




undefined8 FUN_00101e9a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010196e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101d3b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c8b(void)

{
  return;
}




void FUN_00101c80(void)

{
  return;
}




void FUN_00101790(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101840(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001019c7(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101cb7(void)

{
  return;
}




void FUN_00101cf9(void)

{
  return;
}




void FUN_00101f55(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d0f(void)

{
  return;
}




void FUN_00101cd8(void)

{
  return;
}




void FUN_001015f4(void)

{
  undefined4 *puVar1;
  
  if (DAT_00105010 != 0) {
    signal(2,(__sighandler_t)0x0);
    if (DAT_00105028 != (undefined4 *)0x0) {
      free(DAT_00105028);
      DAT_00105028 = (undefined4 *)0x0;
    }
    puVar1 = (undefined4 *)malloc(4);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    DAT_00105028 = puVar1;
    *puVar1 = 1;
    signal(2,FUN_00101410);
    signal(2,(__sighandler_t)0x0);
    if (DAT_00105028 != (undefined4 *)0x0) {
      free(DAT_00105028);
      DAT_00105028 = (undefined4 *)0x0;
    }
    signal(2,FUN_00101410);
  }
  return;
}




undefined8 FUN_00101d72(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101d3b,local_18);
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




void FUN_00101ccd(void)

{
  return;
}




void FUN_00101f36(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f74(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001016dc(void)

{
  FUN_001014ff();
  FUN_001015f4();
  return;
}




void FUN_00101c96(void)

{
  return;
}




void FUN_001014ff(void)

{
  undefined4 *puVar1;
  
  if (DAT_00105030 == 0) {
    signal(2,(__sighandler_t)0x0);
    if (DAT_00105028 != (undefined4 *)0x0) {
      free(DAT_00105028);
      DAT_00105028 = (undefined4 *)0x0;
    }
    puVar1 = (undefined4 *)malloc(4);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    DAT_00105028 = puVar1;
    *puVar1 = 1;
    signal(2,FUN_00101410);
    signal(2,(__sighandler_t)0x0);
    if (DAT_00105028 != (undefined4 *)0x0) {
      free(DAT_00105028);
      DAT_00105028 = (undefined4 *)0x0;
    }
    signal(2,FUN_00101410);
  }
  else {
    FUN_0010176a("Benign, fixed string");
  }
  return;
}




int FUN_00101c5b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ce3(void)

{
  return;
}




void FUN_001017c2(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101c3d(void)

{
  return 1;
}




ulong FUN_00101b5e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001013e9(void)

{
  if (DAT_00105020 != (undefined4 *)0x0) {
    *DAT_00105020 = 2;
  }
  return;
}




void FUN_00101d04(void)

{
  return;
}




void FUN_001017ea(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ca1(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f20)();
  return;
}




void FUN_00101190(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101343) */
/* WARNING: Removing unreachable block (ram,0x0010134f) */

void FUN_00101330(void)

{
  return;
}




void FUN_0010176a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101190(PTR_LOOP_00105008);
    }
    FUN_00101330();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101816(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010186b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101384) */
/* WARNING: Removing unreachable block (ram,0x00101390) */

void FUN_00101360(void)

{
  return;
}




ulong FUN_00101a5a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d30(void)

{
  return;
}




void FUN_00101cc2(void)

{
  return;
}




void FUN_00101437(void)

{
  undefined4 *puVar1;
  
  if (DAT_00105010 != 0) {
    signal(2,(__sighandler_t)0x0);
    if (DAT_00105020 != (undefined4 *)0x0) {
      free(DAT_00105020);
      DAT_00105020 = (undefined4 *)0x0;
    }
    puVar1 = (undefined4 *)malloc(4);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    DAT_00105020 = puVar1;
    *puVar1 = 1;
    signal(2,FUN_001013e9);
    if (DAT_00105020 != (undefined4 *)0x0) {
      free(DAT_00105020);
      DAT_00105020 = (undefined4 *)0x0;
    }
  }
  return;
}




void FUN_00101410(void)

{
  if (DAT_00105028 != (undefined4 *)0x0) {
    *DAT_00105028 = 2;
  }
  return;
}




bool FUN_00101e3f(pthread_t *param_1)

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




void FUN_00101fa0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001016fb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010176a("Calling good()...");
  FUN_001016dc();
  FUN_0010176a("Finished good()");
  FUN_0010176a("Calling bad()...");
  FUN_00101437();
  FUN_0010176a("Finished bad()");
  return 0;
}




void FUN_001018ec(undefined4 param_1)

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




void FUN_00101d1a(void)

{
  return;
}




void FUN_00101cac(void)

{
  return;
}




void FUN_001019fa(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101c4c(void)

{
  return 0;
}




void FUN_001018c1(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101946(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101cee(void)

{
  return;
}



